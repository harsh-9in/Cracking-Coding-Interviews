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


