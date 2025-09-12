let x = 10;

function f() {
    console.log("f() -> x =", x);
}

function g() {
    let x = 20; 
    f();      
}

g();
