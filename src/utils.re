[@bs.val]
external add_keyboard_event_listener :
  (string, ReactEventRe.Keyboard.t => unit) => unit =
  "addEventListener";

[@bs.val]
external remove_keyboard_event_listener :
  (string, ReactEventRe.Keyboard.t => unit) => unit =
  "removeEventListener";

let render_string = ReasonReact.string;

let render_array = ReasonReact.array;

let render_list = xs => xs |> Array.of_list |> render_array;

let make_style = ReactDOMRe.Style.make;

let identity = x => x;