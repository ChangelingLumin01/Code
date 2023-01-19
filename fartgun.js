const fartgun = class {
    constructor(
        color,
        numOfTargets,
        accessory1,
        accessory2,
        accessory3,
        gasStatus,
        bodypartsC,
        bodypartsB,
        bodypartsS
    ){
        this.color = color
        this.numOfTargets = numOfTargets
        this.accessories = [accessory1, accessory2, accessory3]
        this.refillGas = gasStatus
        this.targets = {
            curtis: bodypartsC,
            brobot: bodypartsB,
            scout: bodypartsS
        }
    }

    toggleGas(newGasStatus){
        this.isGasEmpty = newGasStatus
    }

    addAccessories(accessory){
        this.accessories.push(accessory)
    }

    changetargets(newTarget1,  newTarget2, newTarget3){
        this.targets.curtis = newTarget1
        this.targets.brobot = newTarget2
        this.targets.scout = newTarget3
    }
    printAccessories(){
        this.accessories.forEach(accessory =>{
            console.log(`Accessory: ${accessory}`)
        })
    }
}
export default fartgun