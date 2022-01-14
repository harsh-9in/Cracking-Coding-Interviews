// it should not cross the boundry 
//  of its own 

// let a=20;
// {
//     var a=100;   
// }

//  The above example will give error 
//  because of its scope.


// let a=20;
// {
//     let a=100;   
// }

// This will not give any error
// because they both have their own blocl scope.


let a=10;

function x(){
    var a=50;
}

//  This will not give any error.
//  because they both have different scope.

