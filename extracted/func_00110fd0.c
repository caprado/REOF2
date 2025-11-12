void func_00110fd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00110fd0: addiu $sp, $sp, -0x20
    s1 = 0 | 0x81e0;                                            // 0x00110fe4: ori $s1, $zero, 0x81e0
    func_00112048();  // 0x111f90                                // 0x00110ff0: jal 0x111f90
    /* nop */                                                   // 0x00110ff4: nop 
    func_00111ce0();  // 0x111a58                                // 0x00111000: jal 0x111a58
    /* nop */                                                   // 0x00111004: nop 
    func_00111ce0();  // 0x111a58                                // 0x00111010: jal 0x111a58
    /* nop */                                                   // 0x00111014: nop 
    v0 = 0xffff << 16;                                          // 0x0011101c: lui $v0, 0xffff
    s0 = s0 & v0;                                               // 0x00111024: and $s0, $s0, $v0
    func_00112048();  // 0x111f90                                // 0x00111030: jal 0x111f90
    a1 = 0 | 0x83e0;                                            // 0x00111038: ori $a1, $zero, 0x83e0
    if (s0 >= 0) goto label_0x111054;                           // 0x00111040: bgez $s0, 0x111054
    /* nop */                                                   // 0x00111044: nop 
    func_001119f0();  // 0x111998                                // 0x0011104c: jal 0x111998
    /* nop */                                                   // 0x00111050: nop 
label_0x111054:
    func_001119f0();  // 0x111998                                // 0x0011105c: jal 0x111998
    /* nop */                                                   // 0x00111060: nop 
    return;                                                     // 0x00111070: jr $ra
    sp = sp + 0x20;                                             // 0x00111074: addiu $sp, $sp, 0x20
}