// Function expressions  aka Function declaration 

function a(){
    console.log("This is function expression and declatation");
}


// Function expression
var b=function x(){
    console.log("This is function expression");
    console.log("This will not follow hoisting");
    console.log("The value of x will be called in-side the function");  
}

a();
b();

// function parameter
function c(i,j){
    console.log(i,j);
}

// Function Arguments
c(5,10);


// Anonymous Function

// function (){
    
// }


// Named Function Expression
//  ans: ans in line 9 we are using x as name then 
// then it is called name function

