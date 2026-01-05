void func_0016e5f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016e5f0: addiu $sp, $sp, -0x20
    v1 = 3;                                                     // 0x0016e5f4: addiu $v1, $zero, 3
    if (a1 != v1) goto label_0x16e664;                          // 0x0016e60c: bne $a1, $v1, 0x16e664
    func_001752e8();  // 1752e8                                // 0x0016e614: jal 0x1752e8
    a1 = 7;                                                     // 0x0016e618: addiu $a1, $zero, 7
    if (v0 == 0) goto label_0x16e630;                           // 0x0016e61c: beqz $v0, 0x16e630
    v1 = s0 + 0x90c;                                            // 0x0016e620: addiu $v1, $s0, 0x90c
    goto label_0x16e664;                                        // 0x0016e624: b 0x16e664
    /* nop */                                                   // 0x0016e62c: nop 
label_0x16e630:
    a2 = *(int32_t*)((v1) + 8);                                 // 0x0016e630: lw $a2, 8($v1)
    s0 = s0 + 0x94c;                                            // 0x0016e634: addiu $s0, $s0, 0x94c
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x0016e638: lw $v0, 0xc($v1)
    a1 = *(int32_t*)((s1) + 4);                                 // 0x0016e63c: lw $a1, 4($s1)
    /* multiply: v0 *  -> hi:lo */                              // 0x0016e640: mult $a2, $v0
    /* mflo $a2 */                                              // 0x0016e644
    func_00158628();  // 158628                                // 0x0016e648: jal 0x158628
    a0 = *(int32_t*)(s1);                                       // 0x0016e64c: lw $a0, 0($s1)
    /* beqzl $v0, 0x16e668 */                                   // 0x0016e650: beqzl $v0, 0x16e668
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x0016e658: lw $v1, 0x10($s0)
    v1 = v1 + 1;                                                // 0x0016e65c: addiu $v1, $v1, 1
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x0016e660: sw $v1, 0x10($s0)
label_0x16e664:
    return;                                                     // 0x0016e670: jr $ra
    sp = sp + 0x20;                                             // 0x0016e674: addiu $sp, $sp, 0x20
}