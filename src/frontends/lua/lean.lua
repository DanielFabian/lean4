static char const * g_extra_code = R"Lua(
function Consts(s)
  r = {}
  i = 1
  for c in string.gmatch(s, '[^ ,;\t\n]+') do
     r[i] = Const(c)
     i = i + 1
  end
  return unpack(r)
end
)Lua";
