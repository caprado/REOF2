void func_0013f658() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013f658: addiu $sp, $sp, -0x10
    func_0013ef30();  // 0x13ef18                                // 0x0013f664: jal 0x13ef18
    if (s0 == 0) goto label_0x13f688;                           // 0x0013f674: beqz $s0, 0x13f688
    a2 = 0x40;                                                  // 0x0013f678: addiu $a2, $zero, 0x40
    func_00107d30();  // 0x107c70                                // 0x0013f67c: jal 0x107c70
    /* nop */                                                   // 0x0013f680: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0013f684: sw $zero, 4($s0)
label_0x13f688:
    return func_0013ef80();  // Tail call                        // 0x0013f690: j 0x13ef30
    sp = sp + 0x10;                                             // 0x0013f694: addiu $sp, $sp, 0x10
    return;                                                     // 0x0013f698: jr $ra
    v0 = *(int32_t*)((a0) + 8);                                 // 0x0013f69c: lw $v0, 8($a0)
}