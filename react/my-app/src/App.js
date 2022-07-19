import "./App.css";
import About from "./components/About";
import Navbar from "./components/Navbar";
// import TextForm from "./components/TextForm";

function App() {
  const [mode, setMode] = useState(false);
  return (
    <>
    <Navbar title="TextUtils" home="Home" aboutText="About Us" mode={mode}/>
    {/* <div className="container my-3">
    <TextForm heading="Enter your text to analyse below."/>
    </div> */}
    <About/>
    </>
  );
}

export default App;
