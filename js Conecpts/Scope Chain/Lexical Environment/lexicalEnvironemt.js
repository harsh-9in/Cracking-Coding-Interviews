var x=10;
function outer(){
    // x=50
    function inner(){
        console.log(x);
    }
    // x=100;
    inner();
}

outer();