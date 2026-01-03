void func_00123f98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00123f98: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x00123f9c: addiu $v0, $zero, 1
    s1 = s0 + 0x48;                                             // 0x00123fac: addiu $s1, $s0, 0x48
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00123fb8: lw $v1, 4($s0)
    if (v1 != v0) goto label_0x124100;                          // 0x00123fbc: bne $v1, $v0, 0x124100
    s2 = *(int32_t*)(s1);                                       // 0x00123fc0: lw $s2, 0($s1)
    func_00134c58();  // 134c58                                // 0x00123fc4: jal 0x134c58
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00123fc8: lw $a0, 8($s0)
    /* bnezl $v0, 0x124100 */                                   // 0x00123fcc: bnezl $v0, 0x124100
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00123fd0: lw $v1, 4($s0)
    a0 = *(int32_t*)((s0) + 0x7c);                              // 0x00123fd4: lw $a0, 0x7c($s0)
    a1 = s0 + 0x68;                                             // 0x00123fd8: addiu $a1, $s0, 0x68
    v0 = *(int32_t*)((s0) + 0x78);                              // 0x00123fdc: lw $v0, 0x78($s0)
    a2 = s0 + 0x6c;                                             // 0x00123fe0: addiu $a2, $s0, 0x6c
    /* call function at address in v0 */                        // 0x00123fe4: jalr $v0
    a3 = s0 + 0x70;                                             // 0x00123fe8: addiu $a3, $s0, 0x70
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x00123fec: lw $a0, 0x18($s1)
    a3 = *(int32_t*)((s1) + 0x20);                              // 0x00123ff0: lw $a3, 0x20($s1)
    a2 = 2;                                                     // 0x00123ff4: addiu $a2, $zero, 2
    v1 = *(int32_t*)((s1) + 0x24);                              // 0x00123ff8: lw $v1, 0x24($s1)
    t1 = a0 - a3;                                               // 0x00123ffc: subu $t1, $a0, $a3
    a0 = *(int8_t*)((s0) + 0xe);                                // 0x00124000: lb $a0, 0xe($s0)
    v0 = (v1 < t1) ? 1 : 0;                                     // 0x00124004: slt $v0, $v1, $t1
    a1 = *(int32_t*)((s1) + 4);                                 // 0x00124008: lw $a1, 4($s1)
    if (v0 != 0) t1 = v1;                                       // 0x0012400c: movn $t1, $v1, $v0
    v1 = a3 << 1;                                               // 0x00124010: sll $v1, $a3, 1
    t2 = *(int32_t*)((s1) + 0x14);                              // 0x00124014: lw $t2, 0x14($s1)
    v0 = (a1 < t1) ? 1 : 0;                                     // 0x00124018: slt $v0, $a1, $t1
    if (v0 != 0) t1 = a1;                                       // 0x0012401c: movn $t1, $a1, $v0
    t3 = t2 + v1;                                               // 0x00124020: addu $t3, $t2, $v1
    if (a0 != a2) goto label_0x1240a0;                          // 0x00124024: bne $a0, $a2, 0x1240a0
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00124028: lbu $v1, 0xe($s0)
    v0 = *(int32_t*)((s1) + 0x1c);                              // 0x0012402c: lw $v0, 0x1c($s1)
    v0 = v0 + a3;                                               // 0x00124034: addu $v0, $v0, $a3
    v0 = v0 << 1;                                               // 0x00124038: sll $v0, $v0, 1
    if (t1 <= 0) goto label_0x1240e4;                           // 0x0012403c: blez $t1, 0x1240e4
    t4 = t2 + v0;                                               // 0x00124040: addu $t4, $t2, $v0
    v0 = 0x1f << 16;                                            // 0x00124044: lui $v0, 0x1f
    t2 = v0 + 0x1d38;                                           // 0x0012404c: addiu $t2, $v0, 0x1d38
label_0x124050:
    v0 = *(uint8_t*)(a3);                                       // 0x00124050: lbu $v0, 0($a3)
    a0 = t0 << 1;                                               // 0x00124054: sll $a0, $t0, 1
    a1 = a0 + t3;                                               // 0x00124058: addu $a1, $a0, $t3
    a0 = a0 + t4;                                               // 0x0012405c: addu $a0, $a0, $t4
    v0 = v0 << 1;                                               // 0x00124060: sll $v0, $v0, 1
    t0 = t0 + 1;                                                // 0x00124064: addiu $t0, $t0, 1
    v0 = v0 + t2;                                               // 0x00124068: addu $v0, $v0, $t2
    a2 = (t0 < t1) ? 1 : 0;                                     // 0x0012406c: slt $a2, $t0, $t1
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x00124070: lhu $v1, 0($v0)
    *(uint16_t*)(a1) = v1;                                      // 0x00124074: sh $v1, 0($a1)
    v0 = *(uint8_t*)((a3) + 1);                                 // 0x00124078: lbu $v0, 1($a3)
    a3 = a3 + 2;                                                // 0x0012407c: addiu $a3, $a3, 2
    v0 = v0 << 1;                                               // 0x00124080: sll $v0, $v0, 1
    v0 = v0 + t2;                                               // 0x00124084: addu $v0, $v0, $t2
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x00124088: lhu $v1, 0($v0)
    if (a2 != 0) goto label_0x124050;                           // 0x0012408c: bnez $a2, 0x124050
    *(uint16_t*)(a0) = v1;                                      // 0x00124090: sh $v1, 0($a0)
    goto label_0x1240e4;                                        // 0x00124094: b 0x1240e4
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00124098: lbu $v1, 0xe($s0)
    /* nop */                                                   // 0x0012409c: nop 
label_0x1240a0:
    if (t1 <= 0) goto label_0x1240e4;                           // 0x001240a0: blez $t1, 0x1240e4
    v0 = 0x1f << 16;                                            // 0x001240a8: lui $v0, 0x1f
    a2 = v0 + 0x1d38;                                           // 0x001240b0: addiu $a2, $v0, 0x1d38
    /* nop */                                                   // 0x001240b4: nop 
label_0x1240b8:
    v1 = s2 + t0;                                               // 0x001240b8: addu $v1, $s2, $t0
    t0 = t0 + 1;                                                // 0x001240bc: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(v1);                                       // 0x001240c0: lbu $v0, 0($v1)
    a0 = (t0 < t1) ? 1 : 0;                                     // 0x001240c4: slt $a0, $t0, $t1
    v0 = v0 << 1;                                               // 0x001240c8: sll $v0, $v0, 1
    v0 = v0 + a2;                                               // 0x001240cc: addu $v0, $v0, $a2
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x001240d0: lhu $v1, 0($v0)
    *(uint16_t*)(a1) = v1;                                      // 0x001240d4: sh $v1, 0($a1)
    if (a0 != 0) goto label_0x1240b8;                           // 0x001240d8: bnez $a0, 0x1240b8
    a1 = a1 + 2;                                                // 0x001240dc: addiu $a1, $a1, 2
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x001240e0: lbu $v1, 0xe($s0)
label_0x1240e4:
    v0 = v1 << 0x18;                                            // 0x001240e4: sll $v0, $v1, 0x18
    v1 = 2;                                                     // 0x001240e8: addiu $v1, $zero, 2
    v0 = v0 >> 0x18;                                            // 0x001240ec: sra $v0, $v0, 0x18
    *(uint32_t*)((s0) + 4) = v1;                                // 0x001240f0: sw $v1, 4($s0)
    /* multiply: t1 * v0 -> hi:lo */                            // 0x001240f4: mult $ac2, $t1, $v0
    *(uint32_t*)((s0) + 0x90) = t1;                             // 0x001240f8: sw $t1, 0x90($s0)
    *(uint32_t*)((s0) + 0x94) = v0;                             // 0x001240fc: sw $v0, 0x94($s0)
label_0x124100:
    v0 = 2;                                                     // 0x00124100: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x12412c;                          // 0x00124104: bnel $v1, $v0, 0x12412c
    v1 = *(int32_t*)((s0) + 0x80);                              // 0x0012410c: lw $v1, 0x80($s0)
    a0 = *(int32_t*)((s0) + 0x84);                              // 0x00124110: lw $a0, 0x84($s0)
    a1 = *(int32_t*)((s0) + 0x94);                              // 0x00124114: lw $a1, 0x94($s0)
    /* call function at address in v1 */                        // 0x00124118: jalr $v1
    a2 = *(int32_t*)((s0) + 0x90);                              // 0x0012411c: lw $a2, 0x90($s0)
    v0 = 3;                                                     // 0x00124120: addiu $v0, $zero, 3
    *(uint32_t*)((s0) + 4) = v0;                                // 0x00124124: sw $v0, 4($s0)
label_0x12412c:
    return;                                                     // 0x00124138: jr $ra
    sp = sp + 0x20;                                             // 0x0012413c: addiu $sp, $sp, 0x20
}