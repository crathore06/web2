const endDate = "21 March 2026 10:00 PM"

document.getElementById("end-date").innerText = endDate;

// const clock =() => {
    // }

function clock() {
    const end = new Date(endDate);
    const now = new Date()
    const diff = end - now
    console.log(diff);
}


// initial call
clock()