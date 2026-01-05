void func_00140250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00140250: addiu $sp, $sp, -0x20
    v0 = ((unsigned)s2 < (unsigned)4) ? 1 : 0;                  // 0x0014025c: sltiu $v0, $s2, 4
    if (v0 != 0) goto label_0x140298;                           // 0x00140270: bnez $v0, 0x140298
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x00140278: lw $v0, 0x28($s0)
    /* beqzl $v0, 0x140380 */                                   // 0x0014027c: beqzl $v0, 0x140380
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x00140284: lw $a0, 0x2c($s0)
    /* call function at address in v0 */                        // 0x00140288: jalr $v0
    a1 = -3;                                                    // 0x0014028c: addiu $a1, $zero, -3
    goto label_0x140380;                                        // 0x00140290: b 0x140380
label_0x140298:
    v0 = *(int32_t*)((s1) + 4);                                 // 0x00140298: lw $v0, 4($s1)
    if (v0 <= 0) goto label_0x140380;                           // 0x0014029c: blezl $v0, 0x140380
    v0 = *(int32_t*)(s1);                                       // 0x001402a4: lw $v0, 0($s1)
    /* beqzl $v0, 0x140380 */                                   // 0x001402a8: beqzl $v0, 0x140380
    func_0013ef18();  // 13ef18                                // 0x001402b0: jal 0x13ef18
    /* nop */                                                   // 0x001402b4: nop 
    a1 = s2 << 2;                                               // 0x001402b8: sll $a1, $s2, 2
    t0 = s0 + 8;                                                // 0x001402bc: addiu $t0, $s0, 8
    v0 = *(int8_t*)((s0) + 5);                                  // 0x001402c0: lb $v0, 5($s0)
    v1 = a1 + t0;                                               // 0x001402c4: addu $v1, $a1, $t0
    a0 = 1;                                                     // 0x001402c8: addiu $a0, $zero, 1
    if (v0 != a0) goto label_0x140308;                          // 0x001402cc: bne $v0, $a0, 0x140308
    a2 = *(int32_t*)((v1) + 0x10);                              // 0x001402d0: lw $a2, 0x10($v1)
    /* beqzl $a2, 0x14030c */                                   // 0x001402d4: beqzl $a2, 0x14030c
    a2 = *(int32_t*)((s0) + 0x14);                              // 0x001402d8: lw $a2, 0x14($s0)
    a0 = *(int32_t*)(s1);                                       // 0x001402dc: lw $a0, 0($s1)
    a3 = *(int32_t*)((s1) + 4);                                 // 0x001402e0: lw $a3, 4($s1)
    v1 = *(int32_t*)((a2) + 8);                                 // 0x001402e4: lw $v1, 8($a2)
    v0 = a0 + a3;                                               // 0x001402e8: addu $v0, $a0, $a3
    if (v0 != v1) goto label_0x14030c;                          // 0x001402ec: bnel $v0, $v1, 0x14030c
    a2 = *(int32_t*)((s0) + 0x14);                              // 0x001402f0: lw $a2, 0x14($s0)
    v0 = *(int32_t*)((a2) + 0xc);                               // 0x001402f4: lw $v0, 0xc($a2)
    *(uint32_t*)((a2) + 8) = a0;                                // 0x001402f8: sw $a0, 8($a2)
    v0 = v0 + a3;                                               // 0x001402fc: addu $v0, $v0, $a3
    goto label_0x140364;                                        // 0x00140300: b 0x140364
    *(uint32_t*)((a2) + 0xc) = v0;                              // 0x00140304: sw $v0, 0xc($a2)
label_0x140308:
    a2 = *(int32_t*)((s0) + 0x14);                              // 0x00140308: lw $a2, 0x14($s0)
label_0x14030c:
    /* bnezl $a2, 0x140338 */                                   // 0x0014030c: bnezl $a2, 0x140338
    v0 = *(int32_t*)(a2);                                       // 0x00140310: lw $v0, 0($a2)
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x00140314: lw $v0, 0x28($s0)
    /* beqzl $v0, 0x140368 */                                   // 0x00140318: beqzl $v0, 0x140368
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x00140320: lw $a0, 0x2c($s0)
    /* call function at address in v0 */                        // 0x00140324: jalr $v0
    a1 = -3;                                                    // 0x00140328: addiu $a1, $zero, -3
    goto label_0x140368;                                        // 0x0014032c: b 0x140368
    /* nop */                                                   // 0x00140334: nop 
    v1 = a1 + 0x10;                                             // 0x00140338: addiu $v1, $a1, 0x10
    v1 = t0 + v1;                                               // 0x0014033c: addu $v1, $t0, $v1
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x00140350: sw $v0, 0x14($s0)
    *(uint32_t*)(a2) = 0;                                       // 0x00140354: sw $zero, 0($a2)
    v0 = *(int32_t*)(v1);                                       // 0x00140358: lw $v0, 0($v1)
    *(uint32_t*)(a2) = v0;                                      // 0x0014035c: sw $v0, 0($a2)
    *(uint32_t*)(v1) = a2;                                      // 0x00140360: sw $a2, 0($v1)
label_0x140364:
label_0x140368:
    return func_0013ef80();  // Tail call                        // 0x00140374: j 0x13ef30
    sp = sp + 0x20;                                             // 0x00140378: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0014037c: nop 
label_0x140380:
    return;                                                     // 0x0014038c: jr $ra
    sp = sp + 0x20;                                             // 0x00140390: addiu $sp, $sp, 0x20
}