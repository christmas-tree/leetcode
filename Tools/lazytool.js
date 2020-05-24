// browser bookmark to easily generate a file name without any spaces

javascript: (function () {
  let s = document
    .querySelector("div[data-cy='question-title']")
	.textContent
	.replace(/ /g, "");
  let h = "";
  switch (document.querySelector("div[diff]").textContent) {
    case "Easy":
      h = "E";
      break;
    case "Medium":
      h = "M";
      break;
    case "Hard":
      h = "H";
      break;
  }
  prompt("Result: ", h + "_" + s);
})();