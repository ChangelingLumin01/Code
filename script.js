//pay to win! :):):)

const obj = {
    type: "Sedan",
    numOfDoors: 4,
    hasSunRoof: false,
    accessories: ["lightbar", "coffee holder", "heated seats", "nitro"],
    wheelDiamiter: 16.6,
    owner:{
        fName: "Curtis",
        lName: "Brandstetter",
        age: 29,
        address: "Nonya"
    },
    openDoors: function(doorStatus){
        this.doorsOpen = doorStatus
    }
}

console.log(obj)
console.log("pay to win :)")
console.log(obj.accessories[1], "Very conveniant for any coffee fan")
console.log(obj.accessories[0], "too bright for my eyes")
console.log(obj.accessories[2], "my butt's never been happier")
console.log(obj.accessories[3], "I like to call this the puke button")
console.log(obj["wheelDiamiter"])
console.log(obj.owner.address)
console.log(obj["owner"].age)
console.log(obj.owner["fName"])
console.log(obj["owner"]["lName"])

const printPage = function(numOfPages){
    for(let i = 0; i<numOfPages; i++){
        console.log("hello " + i)
    }
}

printPage(4)

const anotherPrintPage = (numOfPages) => {
    for(let i=0; i<numOfPages; i++){
        console.log("PAY TO WIN!!! " + i)
    }
}

anotherPrintPage(10)