void func_0011c0a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x0011c0a0: addiu $sp, $sp, -0x30
    func_0011bb38();  // 0x11ba38                                // 0x0011c0ac: jal 0x11ba38
    if (v0 < 0) goto label_0x11c130;                            // 0x0011c0b4: bltz $v0, 0x11c130
    v0 = 0xffff << 16;                                          // 0x0011c0b8: lui $v0, 0xffff
    func_0011bbc8();  // 0x11bb38                                // 0x0011c0bc: jal 0x11bb38
    /* nop */                                                   // 0x0011c0c0: nop 
    /* beqzl $v0, 0x11c0d8 */                                   // 0x0011c0c4: beqzl $v0, 0x11c0d8
    v0 = 0x25 << 16;                                            // 0x0011c0c8: lui $v0, 0x25
    v0 = 0xfffe << 16;                                          // 0x0011c0cc: lui $v0, 0xfffe
    goto label_0x11c130;                                        // 0x0011c0d0: b 0x11c130
    v0 = v0 | 0xfffc;                                           // 0x0011c0d4: ori $v0, $v0, 0xfffc
    s0 = v0 + -0x478;                                           // 0x0011c0dc: addiu $s0, $v0, -0x478
    a2 = 0xfc;                                                  // 0x0011c0e0: addiu $a2, $zero, 0xfc
    func_0010b460();  // 0x10b2a0                                // 0x0011c0e4: jal 0x10b2a0
    v1 = s0 + -8;                                               // 0x0011c0ec: addiu $v1, $s0, -8
    a0 = 0x25 << 16;                                            // 0x0011c0f0: lui $a0, 0x25
    g_fffdfc83 = 0;  // Global at 0xfffdfc83                    // 0x0011c0f8: sb $zero, 0x103($v1)
    a0 = a0 + -0x280;                                           // 0x0011c0fc: addiu $a0, $a0, -0x280
    a1 = 9;                                                     // 0x0011c100: addiu $a1, $zero, 9
    local_0 = 0;                                                // 0x0011c104: sw $zero, 0($sp)
    t0 = 0x200;                                                 // 0x0011c10c: addiu $t0, $zero, 0x200
    t2 = 4;                                                     // 0x0011c114: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0011c118: jal 0x1176a8
    if (v0 >= 0) goto label_0x11c130;                           // 0x0011c120: bgezl $v0, 0x11c130
    v0 = g_fffdfb80;  // Global at 0xfffdfb80                   // 0x0011c124: lw $v0, -8($s0)
    v0 = 0xfffe << 16;                                          // 0x0011c128: lui $v0, 0xfffe
    v0 = v0 | 0xffff;                                           // 0x0011c12c: ori $v0, $v0, 0xffff
label_0x11c130:
    return;                                                     // 0x0011c138: jr $ra
    sp = sp + 0x30;                                             // 0x0011c13c: addiu $sp, $sp, 0x30
}