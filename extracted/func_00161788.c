void func_00161788() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4;
    
    sp = sp + -0x60;                                            // 0x00161788: addiu $sp, $sp, -0x60
    a1 = 1;                                                     // 0x0016178c: addiu $a1, $zero, 1
    s1 = s0 + 0x100;                                            // 0x0016179c: addiu $s1, $s0, 0x100
    s2 = *(int32_t*)((s0) + 0xe8);                              // 0x001617ac: lw $s2, 0xe8($s0)
    v1 = *(int32_t*)(s2);                                       // 0x001617b0: lw $v1, 0($s2)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x001617b4: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x001617b8: jalr $v0
    a1 = 0x23 << 16;                                            // 0x001617c0: lui $a1, 0x23
    a2 = 0x23 << 16;                                            // 0x001617c4: lui $a2, 0x23
    a1 = &str_00228730;  // "CRITAGE"                           // 0x001617cc: addiu $a1, $a1, -0x78d0
    a2 = &str_00228738;  // "W2121001 : mwPlyAttachAddInfBuf(): bufsize is short." // 0x001617d0: addiu $a2, $a2, -0x78c8
    if (v1 == 0) goto label_0x1617f8;                           // 0x001617d8: beqz $v1, 0x1617f8
    a3 = sp + 0x10;                                             // 0x001617dc: addiu $a3, $sp, 0x10
    v0 = *(int32_t*)((s0) + 0xec);                              // 0x001617e0: lw $v0, 0xec($s0)
    local_4 = v1;                                               // 0x001617e4: sw $v1, 4($sp)
    func_001407b0();  // 0x1406e0                                // 0x001617e8: jal 0x1406e0
    local_0 = v0;                                               // 0x001617ec: sw $v0, 0($sp)
    if (v0 != 0) goto label_0x161810;                           // 0x001617f0: bnez $v0, 0x161810
    s3 = s0 + 0xf4;                                             // 0x001617f4: addiu $s3, $s0, 0xf4
label_0x1617f8:
    v0 = 1;                                                     // 0x001617f8: addiu $v0, $zero, 1
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x001617fc: sw $zero, 4($s1)
    *(uint32_t*)(s1) = v0;                                      // 0x00161800: sw $v0, 0($s1)
    goto label_0x1618b8;                                        // 0x00161804: b 0x1618b8
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x00161808: sw $zero, 8($s1)
    /* nop */                                                   // 0x0016180c: nop 
label_0x161810:
    v0 = *(int32_t*)(s3);                                       // 0x00161810: lw $v0, 0($s3)
    if (v0 == 0) goto label_0x161898;                           // 0x00161814: beqz $v0, 0x161898
    a1 = local_10;                                              // 0x0016181c: lw $a1, 0x10($sp)
    func_00107b68();  // 0x107ab8                                // 0x00161820: jal 0x107ab8
    a2 = local_14;                                              // 0x00161824: lw $a2, 0x14($sp)
    v1 = *(int32_t*)(s3);                                       // 0x00161828: lw $v1, 0($s3)
    a1 = local_14;                                              // 0x0016182c: lw $a1, 0x14($sp)
    v0 = 1;                                                     // 0x00161830: addiu $v0, $zero, 1
    a3 = *(int32_t*)(s2);                                       // 0x00161834: lw $a3, 0($s2)
    s0 = sp + 0x20;                                             // 0x00161838: addiu $s0, $sp, 0x20
    *(uint32_t*)(s1) = v0;                                      // 0x0016183c: sw $v0, 0($s1)
    a2 = 0x7fff << 16;                                          // 0x00161840: lui $a2, 0x7fff
    v0 = *(int32_t*)((a3) + 0x18);                              // 0x00161844: lw $v0, 0x18($a3)
    *(uint32_t*)((s1) + 4) = v1;                                // 0x0016184c: sw $v1, 4($s1)
    *(uint32_t*)((s1) + 8) = a1;                                // 0x00161854: sw $a1, 8($s1)
    a1 = 1;                                                     // 0x00161858: addiu $a1, $zero, 1
    /* call function at address in v0 */                        // 0x0016185c: jalr $v0
    a2 = a2 | 0xffff;                                           // 0x00161860: ori $a2, $a2, 0xffff
    v1 = *(int32_t*)(s2);                                       // 0x00161864: lw $v1, 0($s2)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00161870: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00161874: jalr $v0
    v1 = *(int32_t*)(s2);                                       // 0x0016187c: lw $v1, 0($s2)
    v0 = *(int32_t*)((v1) + 0x14);                              // 0x00161880: lw $v0, 0x14($v1)
    /* call function at address in v0 */                        // 0x00161884: jalr $v0
    goto label_0x1618bc;                                        // 0x0016188c: b 0x1618bc
    /* nop */                                                   // 0x00161894: nop 
label_0x161898:
    a1 = local_14;                                              // 0x00161898: lw $a1, 0x14($sp)
    v1 = 1;                                                     // 0x0016189c: addiu $v1, $zero, 1
    v0 = local_10;                                              // 0x001618a0: lw $v0, 0x10($sp)
    *(uint32_t*)(s1) = v1;                                      // 0x001618a8: sw $v1, 0($s1)
    *(uint32_t*)((s1) + 4) = v0;                                // 0x001618ac: sw $v0, 4($s1)
    func_00161a40();  // 0x1619e0                                // 0x001618b0: jal 0x1619e0
    *(uint32_t*)((s1) + 8) = a1;                                // 0x001618b4: sw $a1, 8($s1)
label_0x1618b8:
label_0x1618bc:
    return;                                                     // 0x001618cc: jr $ra
    sp = sp + 0x60;                                             // 0x001618d0: addiu $sp, $sp, 0x60
}