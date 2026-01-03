void func_0016bc40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016bc40: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x0016bc58: jal 0x169af0
    *(uint32_t*)(s0) = 0;                                       // 0x0016bc5c: sw $zero, 0($s0)
    a1 = 0xff00 << 16;                                          // 0x0016bc60: lui $a1, 0xff00
    if (v0 == 0) goto label_0x16bc88;                           // 0x0016bc64: beqz $v0, 0x16bc88
    a1 = a1 | 0x182;                                            // 0x0016bc70: ori $a1, $a1, 0x182
    return func_00169940();  // Tail call                        // 0x0016bc7c: j 0x1698d0
    sp = sp + 0x20;                                             // 0x0016bc80: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016bc84: nop 
label_0x16bc88:
    func_00170250();  // 170250                                // 0x0016bc88: jal 0x170250
    *(uint32_t*)(s0) = v0;                                      // 0x0016bc90: sw $v0, 0($s0)
    return;                                                     // 0x0016bca4: jr $ra
    sp = sp + 0x20;                                             // 0x0016bca8: addiu $sp, $sp, 0x20
}