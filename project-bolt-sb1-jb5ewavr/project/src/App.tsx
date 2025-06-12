import React, { useState } from 'react';
import { Code, Cpu, Server, Monitor, ArrowRight, Github, Linkedin, Mail, MousePointer } from 'lucide-react';

function App() {
  const [clickCount, setClickCount] = useState(0);

  const skills = [
    { icon: Cpu, name: 'Embedded Systems', description: 'Hardware integration and low-level programming' },
    { icon: Server, name: 'Backend Development', description: 'Server architecture and API development' },
    { icon: Monitor, name: 'Frontend Development', description: 'User interface and experience design' },
  ];

  const languages = [
    { name: 'C++', level: 90, color: 'bg-blue-500' },
    { name: 'Python', level: 85, color: 'bg-green-500' },
  ];

  const projects = [
    {
      title: "IoT Sensor Module",
      image: "https://images.pexels.com/photos/159306/circuit-circuit-board-resistor-computer-159306.jpeg?auto=compress&cs=tinysrgb&w=400",
      description: "Advanced embedded sensor with wireless connectivity"
    },
    {
      title: "Industrial Controller",
      image: "https://images.pexels.com/photos/163125/circuit-circuit-board-resistor-computer-163125.jpeg?auto=compress&cs=tinysrgb&w=400",
      description: "Real-time control system for manufacturing"
    },
    {
      title: "Smart Device PCB",
      image: "https://images.pexels.com/photos/442150/pexels-photo-442150.jpeg?auto=compress&cs=tinysrgb&w=400",
      description: "Custom circuit board design for smart home devices"
    }
  ];

  return (
    <div className="min-h-screen bg-gradient-to-br from-slate-900 via-blue-900 to-slate-900">
      {/* Hero Section */}
      <section className="relative px-6 py-20">
        <div className="max-w-6xl mx-auto">
          <div className="grid lg:grid-cols-2 gap-12 items-center">
            <div className="text-white space-y-6">
              <div className="space-y-2">
                <p className="text-blue-400 text-lg font-medium">Hello, I'm</p>
                <h1 className="text-5xl lg:text-6xl font-bold bg-gradient-to-r from-white to-blue-300 bg-clip-text text-transparent">
                  Engineer
                </h1>
                <p className="text-2xl text-gray-300">Full-Stack Developer</p>
              </div>
              
              <p className="text-lg text-gray-300 leading-relaxed max-w-lg">
                Passionate engineer specializing in embedded systems, backend architecture, and frontend development. 
                I bridge the gap between hardware and software to create innovative solutions.
              </p>

              <div className="flex gap-4">
                <button className="flex items-center gap-2 bg-blue-600 hover:bg-blue-700 px-6 py-3 rounded-lg font-medium transition-all duration-200 hover:transform hover:scale-105">
                  View Projects <ArrowRight size={18} />
                </button>
                <div className="flex gap-3">
                  <a href="#" className="p-3 bg-slate-800 hover:bg-slate-700 rounded-lg transition-colors">
                    <Github size={20} />
                  </a>
                  <a href="#" className="p-3 bg-slate-800 hover:bg-slate-700 rounded-lg transition-colors">
                    <Linkedin size={20} />
                  </a>
                  <a href="#" className="p-3 bg-slate-800 hover:bg-slate-700 rounded-lg transition-colors">
                    <Mail size={20} />
                  </a>
                </div>
              </div>
            </div>

            <div className="relative">
              <div className="relative z-10 rounded-2xl overflow-hidden shadow-2xl">
                <img 
                  src="https://images.pexels.com/photos/3861969/pexels-photo-3861969.jpeg?auto=compress&cs=tinysrgb&w=600" 
                  alt="Engineer Portrait"
                  className="w-full h-96 object-cover"
                />
              </div>
              <div className="absolute inset-0 bg-gradient-to-r from-blue-600/20 to-purple-600/20 rounded-2xl transform rotate-6"></div>
            </div>
          </div>
        </div>
      </section>

      {/* Skills Section */}
      <section className="px-6 py-16 bg-slate-800/50">
        <div className="max-w-6xl mx-auto">
          <h2 className="text-3xl font-bold text-white text-center mb-12">Technical Expertise</h2>
          
          <div className="grid md:grid-cols-3 gap-8 mb-16">
            {skills.map((skill, index) => (
              <div key={index} className="bg-slate-700/50 p-6 rounded-xl hover:bg-slate-700/70 transition-all duration-300 hover:transform hover:scale-105">
                <skill.icon className="text-blue-400 mb-4" size={40} />
                <h3 className="text-xl font-semibold text-white mb-2">{skill.name}</h3>
                <p className="text-gray-300">{skill.description}</p>
              </div>
            ))}
          </div>

          <div className="bg-slate-700/30 p-8 rounded-xl">
            <h3 className="text-2xl font-bold text-white mb-6 flex items-center gap-2">
              <Code className="text-blue-400" size={28} />
              Programming Languages
            </h3>
            <div className="space-y-6">
              {languages.map((lang, index) => (
                <div key={index}>
                  <div className="flex justify-between items-center mb-2">
                    <span className="text-white font-medium">{lang.name}</span>
                    <span className="text-gray-300">{lang.level}%</span>
                  </div>
                  <div className="w-full bg-slate-600 rounded-full h-3">
                    <div 
                      className={`h-3 rounded-full ${lang.color} transition-all duration-1000 ease-out`}
                      style={{ width: `${lang.level}%` }}
                    ></div>
                  </div>
                </div>
              ))}
            </div>
          </div>
        </div>
      </section>

      {/* Projects Gallery */}
      <section className="px-6 py-16">
        <div className="max-w-6xl mx-auto">
          <h2 className="text-3xl font-bold text-white text-center mb-12">Hardware Projects</h2>
          
          <div className="grid md:grid-cols-3 gap-8">
            {projects.map((project, index) => (
              <div key={index} className="group bg-slate-800/50 rounded-xl overflow-hidden hover:bg-slate-800/70 transition-all duration-300">
                <div className="relative overflow-hidden">
                  <img 
                    src={project.image} 
                    alt={project.title}
                    className="w-full h-48 object-cover group-hover:scale-110 transition-transform duration-300"
                  />
                  <div className="absolute inset-0 bg-gradient-to-t from-slate-900/80 to-transparent opacity-0 group-hover:opacity-100 transition-opacity duration-300"></div>
                </div>
                <div className="p-6">
                  <h3 className="text-xl font-semibold text-white mb-2">{project.title}</h3>
                  <p className="text-gray-300">{project.description}</p>
                </div>
              </div>
            ))}
          </div>
        </div>
      </section>

      {/* Interactive Counter */}
      <section className="px-6 py-16 bg-slate-800/50">
        <div className="max-w-4xl mx-auto text-center">
          <h2 className="text-3xl font-bold text-white mb-8">Interactive Counter</h2>
          <p className="text-gray-300 mb-8">Click the button below to increment the counter!</p>
          
          <div className="bg-slate-700/50 p-8 rounded-2xl inline-block">
            <div className="text-6xl font-bold text-blue-400 mb-6 tabular-nums">
              {clickCount}
            </div>
            
            <button
              onClick={() => setClickCount(prev => prev + 1)}
              className="group bg-gradient-to-r from-blue-600 to-purple-600 hover:from-blue-700 hover:to-purple-700 px-8 py-4 rounded-xl font-semibold text-white transition-all duration-200 hover:transform hover:scale-105 active:scale-95 flex items-center gap-3 mx-auto"
            >
              <MousePointer className="group-hover:animate-bounce" size={20} />
              Click Me!
            </button>
            
            <p className="text-gray-400 mt-4">
              {clickCount === 0 && "Start clicking!"}
              {clickCount > 0 && clickCount <= 10 && "Great start!"}
              {clickCount > 10 && clickCount <= 50 && "You're on fire! 🔥"}
              {clickCount > 50 && clickCount <= 100 && "Incredible dedication! ⭐"}
              {clickCount > 100 && "You're a clicking legend! 🏆"}
            </p>
          </div>
        </div>
      </section>

      {/* Footer */}
      <footer className="px-6 py-8 border-t border-slate-700">
        <div className="max-w-6xl mx-auto text-center">
          <p className="text-gray-400">
            © 2025 Engineer Portfolio. Built with React & TypeScript.
          </p>
        </div>
      </footer>
    </div>
  );
}

export default App;