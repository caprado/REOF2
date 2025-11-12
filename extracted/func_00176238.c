void func_00176238() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x40;                                            // 0x00176238: addiu $sp, $sp, -0x40
    s0 = s1 + 0xcc0;                                            // 0x00176248: addiu $s0, $s1, 0xcc0
    func_00176380();  // 0x176330                                // 0x00176260: jal 0x176330
    /* beqzl $v0, 0x176310 */                                   // 0x00176268: beqzl $v0, 0x176310
    v0 = *(int32_t*)((s0) + 0x290);                             // 0x00176270: lw $v0, 0x290($s0)
    if (v0 != 0) goto label_0x176298;                           // 0x00176274: bnez $v0, 0x176298
    v1 = -2;                                                    // 0x0017627c: addiu $v1, $zero, -2
    a0 = 1;                                                     // 0x00176280: addiu $a0, $zero, 1
    *(uint32_t*)(s3) = v1;                                      // 0x00176284: sw $v1, 0($s3)
    goto label_0x17630c;                                        // 0x0017628c: b 0x17630c
    *(uint32_t*)(s4) = a0;                                      // 0x00176290: sw $a0, 0($s4)
    /* nop */                                                   // 0x00176294: nop 
label_0x176298:
    /* call function at address in v0 */                        // 0x0017629c: jalr $v0
    a2 = sp + 4;                                                // 0x001762a0: addiu $a2, $sp, 4
    func_00175bb8();  // 0x175b80                                // 0x001762a8: jal 0x175b80
    if (v0 == 0) goto label_0x1762e8;                           // 0x001762b0: beqz $v0, 0x1762e8
    v1 = -5;                                                    // 0x001762b4: addiu $v1, $zero, -5
    v0 = *(int32_t*)((s0) + 0x294);                             // 0x001762b8: lw $v0, 0x294($s0)
    if (v0 == v1) goto label_0x1762ec;                          // 0x001762bc: beql $v0, $v1, 0x1762ec
    a0 = local_0;                                               // 0x001762c0: lw $a0, 0($sp)
    v1 = *(int32_t*)((s0) + 0x294);                             // 0x001762c4: lw $v1, 0x294($s0)
    a0 = local_0;                                               // 0x001762c8: lw $a0, 0($sp)
    v0 = *(int32_t*)((s0) + 0x298);                             // 0x001762cc: lw $v0, 0x298($s0)
    v1 = a0 - v1;                                               // 0x001762d0: subu $v1, $a0, $v1
    v0 = v0 + v1;                                               // 0x001762d4: addu $v0, $v0, $v1
    *(uint32_t*)((s0) + 0x298) = v0;                            // 0x001762d8: sw $v0, 0x298($s0)
    goto label_0x1762f0;                                        // 0x001762dc: b 0x1762f0
    v1 = local_4;                                               // 0x001762e0: lw $v1, 4($sp)
    /* nop */                                                   // 0x001762e4: nop 
label_0x1762e8:
    a0 = local_0;                                               // 0x001762e8: lw $a0, 0($sp)
label_0x1762ec:
    v1 = local_4;                                               // 0x001762ec: lw $v1, 4($sp)
label_0x1762f0:
    *(uint32_t*)((s0) + 0x294) = a0;                            // 0x001762f4: sw $a0, 0x294($s0)
    *(uint32_t*)((s0) + 0x29c) = v1;                            // 0x001762f8: sw $v1, 0x29c($s0)
    a0 = *(int32_t*)((s0) + 0x298);                             // 0x001762fc: lw $a0, 0x298($s0)
    *(uint32_t*)(s3) = a0;                                      // 0x00176300: sw $a0, 0($s3)
    v1 = *(int32_t*)((s0) + 0x29c);                             // 0x00176304: lw $v1, 0x29c($s0)
    *(uint32_t*)(s4) = v1;                                      // 0x00176308: sw $v1, 0($s4)
label_0x17630c:
    return;                                                     // 0x00176324: jr $ra
    sp = sp + 0x40;                                             // 0x00176328: addiu $sp, $sp, 0x40
}