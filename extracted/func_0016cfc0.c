void func_0016cfc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016cfc0: addiu $sp, $sp, -0x20
    a1 = 6;                                                     // 0x0016cfc4: addiu $a1, $zero, 6
    s1 = s0 + 0xcc0;                                            // 0x0016cfd4: addiu $s1, $s0, 0xcc0
    func_001752e8();  // 1752e8                                // 0x0016cfe0: jal 0x1752e8
    s2 = *(int32_t*)((s0) + 0x1b30);                            // 0x0016cfe4: lw $s2, 0x1b30($s0)
    if (v0 != 0) goto label_0x16d000;                           // 0x0016cfe8: bnez $v0, 0x16d000
    func_0016d090();  // 16d090                                // 0x0016cff0: jal 0x16d090
    /* nop */                                                   // 0x0016cff4: nop 
    goto label_0x16d014;                                        // 0x0016cff8: b 0x16d014
label_0x16d000:
    func_0016d120();  // 16d120                                // 0x0016d000: jal 0x16d120
    /* nop */                                                   // 0x0016d004: nop 
    if (a1 < 0) goto label_0x16d078;                            // 0x0016d00c: bltz $a1, 0x16d078
    v0 = -1;                                                    // 0x0016d010: addiu $v0, $zero, -1
label_0x16d014:
    if (a1 <= 0) goto label_0x16d054;                           // 0x0016d014: blezl $a1, 0x16d054
    a1 = 0x7fff << 16;                                          // 0x0016d018: lui $a1, 0x7fff
    func_00167b40();  // 167b40                                // 0x0016d01c: jal 0x167b40
    v0 = *(int32_t*)((s2) + 0x88);                              // 0x0016d028: lw $v0, 0x88($s2)
    v0 = v0 + 1;                                                // 0x0016d02c: addiu $v0, $v0, 1
    func_001711f0();  // 1711f0                                // 0x0016d030: jal 0x1711f0
    *(uint32_t*)((s2) + 0x88) = v0;                             // 0x0016d034: sw $v0, 0x88($s2)
    if (v0 == 0) goto label_0x16d050;                           // 0x0016d038: beqz $v0, 0x16d050
    func_00171b18();  // 171b18                                // 0x0016d040: jal 0x171b18
    /* nop */                                                   // 0x0016d044: nop 
    v0 = v0 + 1;                                                // 0x0016d048: addiu $v0, $v0, 1
    *(uint32_t*)((s1) + 0x11c) = v0;                            // 0x0016d04c: sw $v0, 0x11c($s1)
label_0x16d050:
    a1 = 0x7fff << 16;                                          // 0x0016d050: lui $a1, 0x7fff
label_0x16d054:
    a0 = s1 + 0x1c;                                             // 0x0016d054: addiu $a0, $s1, 0x1c
    func_00175910();  // 175910                                // 0x0016d058: jal 0x175910
    a1 = a1 | 0xffff;                                           // 0x0016d05c: ori $a1, $a1, 0xffff
    a0 = s1 + 0x44;                                             // 0x0016d060: addiu $a0, $s1, 0x44
    func_00175910();  // 175910                                // 0x0016d064: jal 0x175910
    a1 = -1;                                                    // 0x0016d068: addiu $a1, $zero, -1
    v0 = 0xc0;                                                  // 0x0016d06c: addiu $v0, $zero, 0xc0
    *(uint32_t*)((s2) + 0x78) = v0;                             // 0x0016d070: sw $v0, 0x78($s2)
label_0x16d078:
    return;                                                     // 0x0016d088: jr $ra
    sp = sp + 0x20;                                             // 0x0016d08c: addiu $sp, $sp, 0x20
}