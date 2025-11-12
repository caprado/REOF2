void func_00158c80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00158c80: addiu $sp, $sp, -0x30
    a1 = *(int32_t*)((s3) + 4);                                 // 0x00158cac: lw $a1, 4($s3)
    func_0013f0e8();  // 0x13f020                                // 0x00158cb0: jal 0x13f020
    a0 = *(int32_t*)(s3);                                       // 0x00158cb4: lw $a0, 0($s3)
    v0 = -1;                                                    // 0x00158cc0: addiu $v0, $zero, -1
    if (s2 == 0) goto label_0x158d10;                           // 0x00158cc8: beqz $s2, 0x158d10
    func_00158df0();  // 0x158de8                                // 0x00158cd0: jal 0x158de8
    /* nop */                                                   // 0x00158cd4: nop 
    v1 = *(int32_t*)(s2);                                       // 0x00158cd8: lw $v1, 0($s2)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00158ce4: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00158ce8: jalr $v0
    a1 = 1;                                                     // 0x00158cec: addiu $a1, $zero, 1
    v1 = *(int32_t*)((s3) + 4);                                 // 0x00158cf0: lw $v1, 4($s3)
    a1 = *(int32_t*)(s2);                                       // 0x00158cf4: lw $a1, 0($s2)
    v1 = v1 - v0;                                               // 0x00158cf8: subu $v1, $v1, $v0
    *(uint32_t*)(s4) = v1;                                      // 0x00158cfc: sw $v1, 0($s4)
    v0 = *(int32_t*)((a1) + 0xc);                               // 0x00158d00: lw $v0, 0xc($a1)
    /* call function at address in v0 */                        // 0x00158d04: jalr $v0
label_0x158d10:
    return;                                                     // 0x00158d28: jr $ra
    sp = sp + 0x30;                                             // 0x00158d2c: addiu $sp, $sp, 0x30
}