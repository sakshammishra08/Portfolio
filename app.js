const app = () => {
    const song = document.querySelector(".song");
    const play = document.querySelector(".play");
    const outline = document.querySelector(".moing-outline circle");
    const video = document.querySelector(".vid-container video");

//Sound
const sounds = document.querySelector(".sound-picker button");
//time display
const timeDisplay = document.querySelector(".time-display");
//get the length of the outline
const outlineLength = outline.getTotalLength();
//duration
let fakeduration = 600;

outline.style.strokeDasharray = outlineLength;
outline.style.strokeDashoffset = outlineLength;

//play sound
play.addEventListener("click", function(){
    checkPlaying(song);
});

const checkPlaying = song => {
    if (song.paused) {
      song.play();
      video.play();
      
    } else {
      song.pause();
      video.pause();
      
    }
  };
};

app();