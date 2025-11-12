void func_0016a480() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0016a480: addiu $sp, $sp, -0x30
    func_0016aae8();  // 0x16aa40                                // 0x0016a4a8: jal 0x16aa40
    v0 = 1;                                                     // 0x0016a4b4: addiu $v0, $zero, 1
    if (s0 != v0) goto label_0x16a4d4;                          // 0x0016a4b8: bnel $s0, $v0, 0x16a4d4
    if (s2 == 0) goto label_0x16a4d0;                           // 0x0016a4c0: beqz $s2, 0x16a4d0
    /* call function at address in s2 */                        // 0x0016a4c8: jalr $s2
label_0x16a4d0:
label_0x16a4d4:
    return;                                                     // 0x0016a4e8: jr $ra
    sp = sp + 0x30;                                             // 0x0016a4ec: addiu $sp, $sp, 0x30
}