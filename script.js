/*
    COURSE: COMP1013-Web applications with JavaScript
    AUTHOR: Ziad Ewais
    LAB: 2 - Objects and Classes JavaScript
    STUDENT NAME: Curtis Brandstetter
*/

/*
    Welcome to COMP1013 - Web Apps with JS
    Please write your name in the above section beside 'STUDENT NAME'.
    Please write your code where is indicated.
    Submission is through BlackBoard -> Assignments. Upload your file where is indicated by the week number.
    Please refer to Blackboard -> Faculty information to find the suitable time for office hours.
    Please refer to Blackboard -> Lab Assessments grade poilcy to understand how the labs will be graded.
    Enjoy!
*/

/*
    Before submission, make sure to zip your folder that includes all the working files and rename it as following:
        Lab-2-firstName_Lastname
    *******PLEASE DON'T FORGET TO ADD COMMENTS TO YOUR CODE EXPLAINING WHAT THE CODE DOES!******
 */

/**
    Task 1: Create an Object.
    Create a JS object with the following requirements:
        - A unique product object (Plane, Phone, Watch, Printer, PC, Furniture, .... etc)
        - This objects must have at least 5 properties and 3 methods (functions)
        - The properties must vary in dataType. You should have at least one of the following:
            . String
            . Number
            . Boolean
            . Array
            . Another Object

        - The methods should at least do the following:
            . Change the boolean property
            . Add to the Array property
            . Change the inner object property

    Make sure to print the object to the console and call the methods to alter the property values after making the object, 
    then print the object again to make sure the objects has been altered.
 */

//WRITE YOUR CODE BELOW!

const brobot = {
    roboFriend: true,
    robotDesc: "He's your bestest friend :)",
    numOfArms: 2,
    numOfLegs: 2,
    features: ["streatchy arms", "Spring legs", "Googley Eyes",],
    tricks: {
        trick1: "Dance",
        trick2: "Sing",
        trick3: "Play hide and seek"
    },
    changeTricks: function(newTrick1, newTrick2, newTrick3){
        this.tricks.trick1 = newTrick1,
        this.tricks.trick2 = newTrick2,
        this.tricks.trick3 = newTrick3
    },
    addFeatures: function(features){
        this.features.push(features)
    },
    toggleRoboFriend: function(roboFriend){
        this.toggleRoboFriend = roboFriend
    },

 
}
console.log(brobot)
console.log(`The Brobot is friendly: ${brobot.roboFriend}`),
brobot.toggleRoboFriend(false),
console.log(`Now, the brobot is mad ${brobot.roboFriend} you better start running`)

console.log(brobot.tricks)

console.log(brobot.features)







/*
    Task 2: Create a Class:
    Create a new file for a class of the same object you made object using what you learned in class and has the following requirements:
        - Make a new class JS file.
        - Make sure you import the file before creating a instance of the class.
        - Make sure that your class constructor and methods match the properties of the object declared above.
        - Create an instance of the class below with the correct constructor
        - Print the instance object of the class to the console.
        - Call the class methods that will alter the values of the class instance and print them to console
 */
//WRITE YOUR CODE BELOW!
import fartgun from "./fartgun.js";

const fartgun = new fartgun(
  "green",
  3,
  "Keychain",
  "Skull Sticker",
  "Scope",
  true,
  "Curtis",
  "Brobot",
  "Scout"
   
)

console.log(fartgun)
anotherCar.addAccessories("Precision-sprayer")
console.log(fartgun.accessories)