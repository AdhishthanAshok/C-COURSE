let langOption = document.querySelectorAll("select");
let fromText = document.querySelector(".fromText");
let transText = document.querySelector(".toTranslate");
let fromVoice = document.getElementById("fromSpeech");
let toVoice = document.getElementById("toSpeech");

// making the option  value interact with the API
langOption.forEach((get, con) => {
  for (let countryCode in language) {
    let selected;
    if (con == 0 && countryCode == "en-GB") {
      selected = "selected";
    } else if (con == 1 && countryCode == "hi-IN") {
      selected = "selected";  
    }
    let option = `<option value="${countryCode}"${selected}>${language[countryCode]}</option>`;
    get.insertAdjacentHTML("beforeend", option);
  }
});

// making the tranlastion translateed live
fromText.addEventListener("input", function () {
  let content = fromText.value;
  fromContent = langOption[0].value;
  transContent = langOption[1].value;

  let transLINK = `https://api.mymemory.translated.net/get?q=${content}!&langpair=${fromContent}|${transContent}`;

  fetch(transLINK)
    .then((translate) => translate.json())
    .then((data) => {
      transText.value = data.responseData.translatedText;
    });
});

fromVoice.addEventListener("click", function () {
  let fromTalk;
  fromTalk = new SpeechSynthesisUtterance(fromText.value);
  fromTalk.lang = langOption[0].value;
  console.log('Attempting to speak:', fromTalk);
  window.speechSynthesis.speak(fromTalk);
  console.log("first icon clicked");
});

toVoice.addEventListener("click", function () {
  let toTalk;
  toTalk = new SpeechSynthesisUtterance(transText.value);
  toTalk.lang = langOption[1].value;
  window.speechSynthesis.speak(toTalk);
});



// let speech = new SpeechSynthesisUtterance();

// document.getElementById("fromSpeech").addEventListener("click" , () =>{
//     speech.text = document.getElementsByClassName("fromText").value;
//     window.speechSynthesis.speak(speech);
// })
// document.getElementById("toSpeech").addEventListener("click" , () =>{
//     speech.text = document.getElementsByClassName("toTranslate").value;
//     window.speechSynthesis.speak(speech);
// })





