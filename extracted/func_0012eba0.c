void func_0012eba0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0012eba0: addiu $sp, $sp, -0x30
    s2 = 0x12;                                                  // 0x0012ebb0: addiu $s2, $zero, 0x12
    s1 = *(int32_t*)((s0) + 0xc);                               // 0x0012ebc4: lw $s1, 0xc($s0)
label_0x12ebc8:
    v1 = *(int32_t*)(s1);                                       // 0x0012ebc8: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0012ebd0: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0012ebd4: jalr $v0
    /* divide: v0 / s2 -> hi:lo */                              // 0x0012ebe0: div $zero, $v0, $s2
    /* beqzl $s2, 0x12ebec */                                   // 0x0012ebe4: beqzl $s2, 0x12ebec
    /* break (trap) */                                          // 0x0012ebe8: break 0, 7
    v1 = *(int32_t*)((s0) + 0x58);                              // 0x0012ebec: lw $v1, 0x58($s0)
    /* mflo $v0 */                                              // 0x0012ebf0
    /* divide: v0 / v1 -> hi:lo */                              // 0x0012ebf4: div $zero, $v0, $v1
    /* mflo $v0 */                                              // 0x0012ebf8
    if (v0 <= 0) goto label_0x12ec34;                           // 0x0012ebfc: blez $v0, 0x12ec34
    func_0012e8b0();  // 12e8b0                                // 0x0012ec04: jal 0x12e8b0
    /* nop */                                                   // 0x0012ec08: nop 
    if (v0 == 0) goto label_0x12ec34;                           // 0x0012ec0c: beqz $v0, 0x12ec34
    func_0012ea70();  // 12ea70                                // 0x0012ec14: jal 0x12ea70
    v1 = *(int32_t*)((s0) + 0x30);                              // 0x0012ec1c: lw $v1, 0x30($s0)
    a0 = *(int32_t*)((s0) + 0x3c);                              // 0x0012ec20: lw $a0, 0x3c($s0)
    v1 = (v1 < a0) ? 1 : 0;                                     // 0x0012ec24: slt $v1, $v1, $a0
    if (v1 != 0) goto label_0x12ebc8;                           // 0x0012ec28: bnez $v1, 0x12ebc8
    s3 = s3 + v0;                                               // 0x0012ec2c: addu $s3, $s3, $v0
label_0x12ec34:
    return;                                                     // 0x0012ec48: jr $ra
    sp = sp + 0x30;                                             // 0x0012ec4c: addiu $sp, $sp, 0x30
}