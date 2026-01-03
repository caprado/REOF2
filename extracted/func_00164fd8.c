void func_00164fd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00164fd8: addiu $sp, $sp, -0x30
    s3 = 1;                                                     // 0x00164fe8: addiu $s3, $zero, 1
    v0 = s1 + 0x1b6c;                                           // 0x00164ff0: addiu $v0, $s1, 0x1b6c
    s2 = *(int32_t*)((v0) + 0x14);                              // 0x00164ffc: lw $s2, 0x14($v0)
    s0 = *(int32_t*)((v0) + 0x10);                              // 0x00165000: lw $s0, 0x10($v0)
    func_00167980();  // 167980                                // 0x00165004: jal 0x167980
    if (v0 == s3) goto label_0x165060;                          // 0x00165010: beq $v0, $s3, 0x165060
    func_00167980();  // 167980                                // 0x00165018: jal 0x167980
    /* nop */                                                   // 0x0016501c: nop 
    if (v0 != s3) goto label_0x165064;                          // 0x00165020: bnel $v0, $s3, 0x165064
    func_00165080();  // 165080                                // 0x00165028: jal 0x165080
    if (v0 == 0) goto label_0x165060;                           // 0x00165030: beqz $v0, 0x165060
    a2 = 1;                                                     // 0x00165044: addiu $a2, $zero, 1
    return func_00167980();  // Tail call                        // 0x00165054: j 0x167960
    sp = sp + 0x30;                                             // 0x00165058: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0016505c: nop 
label_0x165060:
label_0x165064:
    return;                                                     // 0x00165074: jr $ra
    sp = sp + 0x30;                                             // 0x00165078: addiu $sp, $sp, 0x30
}