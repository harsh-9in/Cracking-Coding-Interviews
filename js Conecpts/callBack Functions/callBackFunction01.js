// What is Call back function
// Ans.  When we pass a function inside a function 
//  then the passed function is known as call back function.



//  Callback functionality give the access to use asynchronous world
//  in a synchronous and single threaded language js.




setTimeout(function () {
    console.log("Timer");
}, 5000);

function x(param){
    console.log("Function name: x");
    console.log("Function Parameter:", param);
}

x(function y(){
    // This is a call back function.
    console.log("y");
});







