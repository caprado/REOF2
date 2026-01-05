void func_0012e258() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_4;
    
    sp = sp + -0x70;                                            // 0x0012e258: addiu $sp, $sp, -0x70
    fp = s7 + 4;                                                // 0x0012e280: addiu $fp, $s7, 4
    v1 = *(int32_t*)((s7) + 0x58);                              // 0x0012e298: lw $v1, 0x58($s7)
    if (v1 <= 0) goto label_0x12e2e8;                           // 0x0012e29c: blez $v1, 0x12e2e8
    local_10 = a3;                                              // 0x0012e2a0: sw $a3, 0x10($sp)
    a0 = *(int32_t*)(s0);                                       // 0x0012e2a8: lw $a0, 0($s0)
    /* nop */                                                   // 0x0012e2ac: nop 
    s0 = s0 + 4;                                                // 0x0012e2b0: addiu $s0, $s0, 4
    v1 = *(int32_t*)(a0);                                       // 0x0012e2b4: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0012e2b8: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0012e2bc: jalr $v0
    a1 = 1;                                                     // 0x0012e2c0: addiu $a1, $zero, 1
    s1 = (unsigned)v0 >> 1;                                     // 0x0012e2c4: srl $s1, $v0, 1
    v1 = (s1 < s2) ? 1 : 0;                                     // 0x0012e2c8: slt $v1, $s1, $s2
    if (v1 != 0) goto label_0x12e394;                           // 0x0012e2cc: bnez $v1, 0x12e394
    v1 = *(int32_t*)((s7) + 0x58);                              // 0x0012e2d4: lw $v1, 0x58($s7)
    s4 = s4 + 1;                                                // 0x0012e2d8: addiu $s4, $s4, 1
    v0 = (s4 < v1) ? 1 : 0;                                     // 0x0012e2dc: slt $v0, $s4, $v1
    /* bnezl $v0, 0x12e2b0 */                                   // 0x0012e2e0: bnezl $v0, 0x12e2b0
    a0 = *(int32_t*)(s0);                                       // 0x0012e2e4: lw $a0, 0($s0)
label_0x12e2e8:
    if (v1 <= 0) goto label_0x12e390;                           // 0x0012e2e8: blez $v1, 0x12e390
    /* nop */                                                   // 0x0012e2f4: nop 
label_0x12e2f8:
    if (s2 <= 0) goto label_0x12e380;                           // 0x0012e2f8: blez $s2, 0x12e380
    v0 = local_10;                                              // 0x0012e300: lw $v0, 0x10($sp)
    s6 = s2 << 1;                                               // 0x0012e304: sll $s6, $s2, 1
    s0 = s5 + fp;                                               // 0x0012e308: addu $s0, $s5, $fp
    s3 = s5 + v0;                                               // 0x0012e30c: addu $s3, $s5, $v0
    a0 = *(int32_t*)(s0);                                       // 0x0012e310: lw $a0, 0($s0)
    /* nop */                                                   // 0x0012e314: nop 
    a1 = 1;                                                     // 0x0012e31c: addiu $a1, $zero, 1
    v1 = *(int32_t*)(a0);                                       // 0x0012e320: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0012e324: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x0012e328: jalr $v0
    v1 = *(int32_t*)(s3);                                       // 0x0012e330: lw $v1, 0($s3)
    a1 = local_0;                                               // 0x0012e334: lw $a1, 0($sp)
    a0 = s1 << 1;                                               // 0x0012e338: sll $a0, $s1, 1
    a2 = local_4;                                               // 0x0012e33c: lw $a2, 4($sp)
    func_00107ab8();  // 107ab8                                // 0x0012e340: jal 0x107ab8
    a0 = a0 + v1;                                               // 0x0012e344: addu $a0, $a0, $v1
    a0 = *(int32_t*)(s0);                                       // 0x0012e348: lw $a0, 0($s0)
    v0 = local_4;                                               // 0x0012e34c: lw $v0, 4($sp)
    a3 = *(int32_t*)(a0);                                       // 0x0012e354: lw $a3, 0($a0)
    v0 = v0 << 0xf;                                             // 0x0012e35c: sll $v0, $v0, 0xf
    v0 = v0 >> 0x10;                                            // 0x0012e360: sra $v0, $v0, 0x10
    v1 = *(int32_t*)((a3) + 0x20);                              // 0x0012e364: lw $v1, 0x20($a3)
    /* call function at address in v1 */                        // 0x0012e368: jalr $v1
    s1 = s1 + v0;                                               // 0x0012e36c: addu $s1, $s1, $v0
    v0 = (s1 < s2) ? 1 : 0;                                     // 0x0012e370: slt $v0, $s1, $s2
    /* bnezl $v0, 0x12e318 */                                   // 0x0012e374: bnezl $v0, 0x12e318
    a0 = *(int32_t*)(s0);                                       // 0x0012e378: lw $a0, 0($s0)
    v1 = *(int32_t*)((s7) + 0x58);                              // 0x0012e37c: lw $v1, 0x58($s7)
label_0x12e380:
    s4 = s4 + 1;                                                // 0x0012e380: addiu $s4, $s4, 1
    v0 = (s4 < v1) ? 1 : 0;                                     // 0x0012e384: slt $v0, $s4, $v1
    if (v0 != 0) goto label_0x12e2f8;                           // 0x0012e388: bnez $v0, 0x12e2f8
    s5 = s5 + 4;                                                // 0x0012e38c: addiu $s5, $s5, 4
label_0x12e390:
label_0x12e394:
    return;                                                     // 0x0012e3bc: jr $ra
    sp = sp + 0x70;                                             // 0x0012e3c0: addiu $sp, $sp, 0x70
}