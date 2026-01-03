void func_00144408() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_40, local_44, local_48, local_4c;
    
    sp = sp + -0xb0;                                            // 0x00144408: addiu $sp, $sp, -0xb0
    a2 = sp + 0x40;                                             // 0x00144410: addiu $a2, $sp, 0x40
    local_40 = 0;                                               // 0x00144420: sw $zero, 0x40($sp)
    local_44 = 0;                                               // 0x00144424: sw $zero, 0x44($sp)
    a3 = sp + 0x44;                                             // 0x00144428: addiu $a3, $sp, 0x44
    func_001442d8();  // 1442d8                                // 0x00144438: jal 0x1442d8
    if (v0 != 0) goto label_0x1445ec;                           // 0x00144440: bnez $v0, 0x1445ec
    *(uint32_t*)((s0) + 0x134) = 0;                             // 0x00144448: sw $zero, 0x134($s0)
    /* nop */                                                   // 0x0014444c: nop 
label_0x144450:
    v0 = local_40;                                              // 0x00144450: lw $v0, 0x40($sp)
    v0 = (v0 < s3) ? 1 : 0;                                     // 0x00144454: slt $v0, $v0, $s3
    /* bnezl $v0, 0x144468 */                                   // 0x00144458: bnezl $v0, 0x144468
    v0 = *(int32_t*)((s0) + 0x828);                             // 0x0014445c: lw $v0, 0x828($s0)
    goto label_0x1445e8;                                        // 0x00144460: b 0x1445e8
    v1 = 0x140;                                                 // 0x00144468: addiu $v1, $zero, 0x140
    v0 = a1 + s0;                                               // 0x00144474: addu $v0, $a1, $s0
    func_00143c70();  // 143c70                                // 0x00144478: jal 0x143c70
    *(uint32_t*)((v0) + 0x6e4) = 0;                             // 0x0014447c: sw $zero, 0x6e4($v0)
    /* bnezl $v0, 0x14449c */                                   // 0x00144480: bnezl $v0, 0x14449c
    v0 = local_44;                                              // 0x00144484: lw $v0, 0x44($sp)
    a0 = *(int32_t*)((s0) + 0x10a0);                            // 0x00144488: lw $a0, 0x10a0($s0)
    v1 = 4;                                                     // 0x0014448c: addiu $v1, $zero, 4
    v0 = 2;                                                     // 0x00144490: addiu $v0, $zero, 2
    goto label_0x1445e8;                                        // 0x00144494: b 0x1445e8
    if (a0 != 0) v0 = v1;                                       // 0x00144498: movn $v0, $v1, $a0
    if (v0 != 0) goto label_0x1444e8;                           // 0x0014449c: bnez $v0, 0x1444e8
    v0 = local_40;                                              // 0x001444a0: lw $v0, 0x40($sp)
    func_00145478();  // 145478                                // 0x001444a8: jal 0x145478
    a1 = 0x17;                                                  // 0x001444ac: addiu $a1, $zero, 0x17
    /* beqzl $v0, 0x1444c8 */                                   // 0x001444b0: beqzl $v0, 0x1444c8
    *(uint32_t*)((s0) + 0x134) = 0;                             // 0x001444b4: sw $zero, 0x134($s0)
    v0 = *(int32_t*)((s0) + 0x134);                             // 0x001444b8: lw $v0, 0x134($s0)
    if (v0 == 0) goto label_0x1444d0;                           // 0x001444bc: beqz $v0, 0x1444d0
    /* nop */                                                   // 0x001444c0: nop 
    *(uint32_t*)((s0) + 0x134) = 0;                             // 0x001444c4: sw $zero, 0x134($s0)
    goto label_0x1445e8;                                        // 0x001444c8: b 0x1445e8
    v0 = 3;                                                     // 0x001444cc: addiu $v0, $zero, 3
label_0x1444d0:
    func_001440b0();  // 1440b0                                // 0x001444d0: jal 0x1440b0
    v1 = *(int32_t*)((s0) + 0x134);                             // 0x001444d8: lw $v1, 0x134($s0)
    if (v1 != 0) goto label_0x144544;                           // 0x001444dc: bnez $v1, 0x144544
    local_44 = v0;                                              // 0x001444e0: sw $v0, 0x44($sp)
    v0 = local_40;                                              // 0x001444e4: lw $v0, 0x40($sp)
label_0x1444e8:
    v0 = (v0 < s3) ? 1 : 0;                                     // 0x001444e8: slt $v0, $v0, $s3
    if (v0 != 0) goto label_0x14450c;                           // 0x001444ec: bnez $v0, 0x14450c
    v1 = local_44;                                              // 0x001444f0: lw $v1, 0x44($sp)
    a1 = 0x22 << 16;                                            // 0x001444f4: lui $a1, 0x22
    func_00148530();  // 148530                                // 0x001444fc: jal 0x148530
    a1 = &str_00226708;  // "skiped macroblock in I picure is not allowed" // 0x00144500: addiu $a1, $a1, 0x6708
    goto label_0x1445e8;                                        // 0x00144504: b 0x1445e8
    v0 = 2;                                                     // 0x00144508: addiu $v0, $zero, 2
label_0x14450c:
    v0 = 1;                                                     // 0x0014450c: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x144550;                          // 0x00144510: bne $v1, $v0, 0x144550
    s2 = sp + 0x20;                                             // 0x00144514: addiu $s2, $sp, 0x20
    s1 = sp + 0x30;                                             // 0x00144518: addiu $s1, $sp, 0x30
    a1 = sp + 0x48;                                             // 0x00144520: addiu $a1, $sp, 0x48
    a2 = sp + 0x4c;                                             // 0x00144524: addiu $a2, $sp, 0x4c
    a3 = sp + 0x50;                                             // 0x00144528: addiu $a3, $sp, 0x50
    func_001446c8();  // 1446c8                                // 0x00144534: jal 0x1446c8
    if (v0 != 0) goto label_0x144574;                           // 0x0014453c: bnez $v0, 0x144574
    a1 = local_40;                                              // 0x00144540: lw $a1, 0x40($sp)
label_0x144544:
    *(uint32_t*)((s0) + 0x134) = 0;                             // 0x00144544: sw $zero, 0x134($s0)
    goto label_0x1445e8;                                        // 0x00144548: b 0x1445e8
    v0 = 1;                                                     // 0x0014454c: addiu $v0, $zero, 1
label_0x144550:
    a2 = sp + 0x4c;                                             // 0x00144558: addiu $a2, $sp, 0x4c
    func_00144608();  // 144608                                // 0x00144560: jal 0x144608
    t0 = sp + 0x48;                                             // 0x00144564: addiu $t0, $sp, 0x48
    if (v0 == 0) goto label_0x14459c;                           // 0x00144568: beqz $v0, 0x14459c
    s1 = sp + 0x30;                                             // 0x0014456c: addiu $s1, $sp, 0x30
    a1 = local_40;                                              // 0x00144570: lw $a1, 0x40($sp)
label_0x144574:
    a2 = local_44;                                              // 0x00144578: lw $a2, 0x44($sp)
    a3 = local_48;                                              // 0x00144580: lw $a3, 0x48($sp)
    t0 = local_4c;                                              // 0x00144588: lw $t0, 0x4c($sp)
    func_00141f00();  // 141f00                                // 0x0014458c: jal 0x141f00
    if (v0 != 0) goto label_0x1445a8;                           // 0x00144594: bnez $v0, 0x1445a8
    a0 = local_40;                                              // 0x00144598: lw $a0, 0x40($sp)
label_0x14459c:
    *(uint32_t*)((s0) + 0x134) = 0;                             // 0x0014459c: sw $zero, 0x134($s0)
    goto label_0x1445e8;                                        // 0x001445a0: b 0x1445e8
    v0 = 2;                                                     // 0x001445a4: addiu $v0, $zero, 2
label_0x1445a8:
    /* beqzl $a0, 0x1445c8 */                                   // 0x001445a8: beqzl $a0, 0x1445c8
    v0 = *(int32_t*)((s0) + 0x828);                             // 0x001445ac: lw $v0, 0x828($s0)
    a1 = *(int32_t*)((s0) + 0x828);                             // 0x001445b0: lw $a1, 0x828($s0)
    func_00142c78();  // 142c78                                // 0x001445b8: jal 0x142c78
    a1 = a1 ^ 1;                                                // 0x001445bc: xori $a1, $a1, 1
    a0 = local_40;                                              // 0x001445c0: lw $a0, 0x40($sp)
    v0 = *(int32_t*)((s0) + 0x828);                             // 0x001445c4: lw $v0, 0x828($s0)
    a0 = a0 + 1;                                                // 0x001445c8: addiu $a0, $a0, 1
    v1 = local_44;                                              // 0x001445cc: lw $v1, 0x44($sp)
    v0 = v0 ^ 1;                                                // 0x001445d0: xori $v0, $v0, 1
    local_40 = a0;                                              // 0x001445d4: sw $a0, 0x40($sp)
    v1 = v1 + -1;                                               // 0x001445d8: addiu $v1, $v1, -1
    *(uint32_t*)((s0) + 0x828) = v0;                            // 0x001445dc: sw $v0, 0x828($s0)
    goto label_0x144450;                                        // 0x001445e0: b 0x144450
    local_44 = v1;                                              // 0x001445e4: sw $v1, 0x44($sp)
label_0x1445e8:
label_0x1445ec:
    return;                                                     // 0x001445fc: jr $ra
    sp = sp + 0xb0;                                             // 0x00144600: addiu $sp, $sp, 0xb0
}