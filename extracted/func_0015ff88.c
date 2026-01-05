void func_0015ff88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x0015ff88: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x0015ff94: jal 0x15fc80
    a0 = 0x22 << 16;                                            // 0x0015ff9c: lui $a0, 0x22
    if (v0 != 0) goto label_0x15ffc0;                           // 0x0015ffa4: bnez $v0, 0x15ffc0
    a0 = &str_00227e50;  // "E1121601 mwPlyGetNumDecPool"       // 0x0015ffa8: addiu $a0, $a0, 0x7e50
    func_00163410();  // 163410                                // 0x0015ffac: jal 0x163410
    /* nop */                                                   // 0x0015ffb0: nop 
    goto label_0x15ffe0;                                        // 0x0015ffb4: b 0x15ffe0
    /* nop */                                                   // 0x0015ffbc: nop 
label_0x15ffc0:
    func_0016bc40();  // 16bc40                                // 0x0015ffc0: jal 0x16bc40
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x0015ffc4: lw $a0, 0x40($s0)
    a0 = 0x22 << 16;                                            // 0x0015ffc8: lui $a0, 0x22
    if (v0 == 0) goto label_0x15ffdc;                           // 0x0015ffcc: beqz $v0, 0x15ffdc
    a0 = &str_00227e88;  // "E1122620: mwPlyGetNumTotalDec: handle is invalid." // 0x0015ffd0: addiu $a0, $a0, 0x7e88
    func_00163410();  // 163410                                // 0x0015ffd4: jal 0x163410
    /* nop */                                                   // 0x0015ffd8: nop 
label_0x15ffdc:
    v0 = local_0;                                               // 0x0015ffdc: lw $v0, 0($sp)
label_0x15ffe0:
    return;                                                     // 0x0015ffe8: jr $ra
    sp = sp + 0x20;                                             // 0x0015ffec: addiu $sp, $sp, 0x20
}