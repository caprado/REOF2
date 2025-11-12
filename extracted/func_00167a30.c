void func_00167a30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00167a30: addiu $sp, $sp, -0x10
    func_00169b10();  // 0x169af0                                // 0x00167a3c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00167a44: lui $a1, 0xff00
    a2 = 1;                                                     // 0x00167a4c: addiu $a2, $zero, 1
    if (v0 == 0) goto label_0x167a70;                           // 0x00167a50: beqz $v0, 0x167a70
    a1 = a1 | 0x161;                                            // 0x00167a54: ori $a1, $a1, 0x161
    return func_00169940();  // Tail call                        // 0x00167a64: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00167a68: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00167a6c: nop 
label_0x167a70:
    func_00175170();  // 0x175120                                // 0x00167a70: jal 0x175120
    a1 = 0x31;                                                  // 0x00167a74: addiu $a1, $zero, 0x31
    return;                                                     // 0x00167a84: jr $ra
    sp = sp + 0x10;                                             // 0x00167a88: addiu $sp, $sp, 0x10
}