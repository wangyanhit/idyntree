function v = LINK_MASS()
  persistent vInitialized;
  if isempty(vInitialized)
    vInitialized = iDynTreeMEX(0, 8);
  end
  v = vInitialized;
end
