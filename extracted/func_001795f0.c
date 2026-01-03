void func_001795f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001795f0: addiu $sp, $sp, -0x20
    v0 = 0x23 << 16;                                            // 0x001795f4: lui $v0, 0x23
    a1 = v0 + -0x6978;                                          // 0x00179600: addiu $a1, $v0, -0x6978
    func_0010b4b0();  // 10b4b0                                // 0x0017960c: jal 0x10b4b0
    if (v1 == 0) goto label_0x17963c;                           // 0x0017961c: beqz $v1, 0x17963c
    a0 = v1 + 4;                                                // 0x00179620: addiu $a0, $v1, 4
    func_00179650();  // 179650                                // 0x00179624: jal 0x179650
    /* nop */                                                   // 0x00179628: nop 
    func_00179650();  // 179650                                // 0x00179630: jal 0x179650
    a0 = v0 + 1;                                                // 0x00179634: addiu $a0, $v0, 1
    v0 = 1;                                                     // 0x00179638: addiu $v0, $zero, 1
label_0x17963c:
    return;                                                     // 0x00179648: jr $ra
    sp = sp + 0x20;                                             // 0x0017964c: addiu $sp, $sp, 0x20
}