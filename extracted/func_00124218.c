void func_00124218() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1f << 16;                                            // 0x00124218: lui $v0, 0x1f
    sp = sp + -0x30;                                            // 0x0012421c: addiu $sp, $sp, -0x30
    v1 = g_001f1f3c;  // Global at 0x001f1f3c                   // 0x00124220: lw $v1, 0x1f3c($v0)
    if (v1 != 0) goto label_0x12425c;                           // 0x0012424c: bnez $v1, 0x12425c
    func_00124218();  // 0x1241d8                                // 0x00124254: jal 0x1241d8
    /* nop */                                                   // 0x00124258: nop 
label_0x12425c:
    *(uint16_t*)(s2) = 0;                                       // 0x0012425c: sh $zero, 0($s2)
    *(uint16_t*)(s3) = 0;                                       // 0x00124260: sh $zero, 0($s3)
    if (s1 != 0) goto label_0x124274;                           // 0x00124264: bnez $s1, 0x124274
    *(uint16_t*)(s4) = 0;                                       // 0x00124268: sh $zero, 0($s4)
    if (s0 <= 0) goto label_0x1243ac;                           // 0x0012426c: blez $s0, 0x1243ac
label_0x124274:
    t3 = 0x22 << 16;                                            // 0x00124274: lui $t3, 0x22
    v0 = t3 + 0x1be0;                                           // 0x0012427c: addiu $v0, $t3, 0x1be0
    if (s0 <= 0) goto label_0x1242e4;                           // 0x00124280: blez $s0, 0x1242e4
    t2 = g_00221de0;  // Global at 0x00221de0                   // 0x00124284: lh $t2, 0x200($v0)
    /* nop */                                                   // 0x0012428c: nop 
label_0x124290:
    v1 = s1 + a3;                                               // 0x00124290: addu $v1, $s1, $a3
    a3 = a3 + 1;                                                // 0x00124294: addiu $a3, $a3, 1
    v0 = *(int8_t*)(v1);                                        // 0x00124298: lb $v0, 0($v1)
    a2 = (a3 < s0) ? 1 : 0;                                     // 0x0012429c: slt $a2, $a3, $s0
    v0 = v0 << 1;                                               // 0x001242a0: sll $v0, $v0, 1
    v0 = v0 + t0;                                               // 0x001242a4: addu $v0, $v0, $t0
    v1 = g_00221ce0;  // Global at 0x00221ce0                   // 0x001242a8: lh $v1, 0x100($v0)
    /* multiply: t2 * v1 -> hi:lo */                            // 0x001242ac: mult $ac3, $t2, $v1
    a1 = v1 + 0x3ff;                                            // 0x001242b0: addiu $a1, $v1, 0x3ff
    a0 = (v1 < 0) ? 1 : 0;                                      // 0x001242b4: slti $a0, $v1, 0
    if (a0 != 0) v0 = a1;                                       // 0x001242bc: movn $v0, $a1, $a0
    v0 = v0 >> 0xa;                                             // 0x001242c0: sra $v0, $v0, 0xa
    v0 = v0 << 0xa;                                             // 0x001242c4: sll $v0, $v0, 0xa
    v1 = v1 - v0;                                               // 0x001242c8: subu $v1, $v1, $v0
    v1 = v1 << 1;                                               // 0x001242cc: sll $v1, $v1, 1
    v1 = v1 + t0;                                               // 0x001242d0: addu $v1, $v1, $t0
    if (a2 != 0) goto label_0x124290;                           // 0x001242d4: bnez $a2, 0x124290
    t2 = *(int16_t*)(v1);                                       // 0x001242d8: lh $t2, 0($v1)
    v0 = t3 + 0x1be0;                                           // 0x001242dc: addiu $v0, $t3, 0x1be0
label_0x1242e4:
    if (s0 <= 0) goto label_0x12433c;                           // 0x001242e4: blez $s0, 0x12433c
    t0 = g_00221fe0;  // Global at 0x00221fe0                   // 0x001242e8: lh $t0, 0x400($v0)
label_0x1242f0:
    v1 = s1 + a3;                                               // 0x001242f0: addu $v1, $s1, $a3
    a3 = a3 + 1;                                                // 0x001242f4: addiu $a3, $a3, 1
    v0 = *(int8_t*)(v1);                                        // 0x001242f8: lb $v0, 0($v1)
    a2 = (a3 < s0) ? 1 : 0;                                     // 0x001242fc: slt $a2, $a3, $s0
    v0 = v0 << 1;                                               // 0x00124300: sll $v0, $v0, 1
    v0 = v0 + t1;                                               // 0x00124304: addu $v0, $v0, $t1
    v1 = g_00221ce0;  // Global at 0x00221ce0                   // 0x00124308: lh $v1, 0x100($v0)
    /* multiply: t0 * v1 -> hi:lo */                            // 0x0012430c: mult $ac3, $t0, $v1
    a1 = v1 + 0x3ff;                                            // 0x00124310: addiu $a1, $v1, 0x3ff
    a0 = (v1 < 0) ? 1 : 0;                                      // 0x00124314: slti $a0, $v1, 0
    if (a0 != 0) v0 = a1;                                       // 0x0012431c: movn $v0, $a1, $a0
    v0 = v0 >> 0xa;                                             // 0x00124320: sra $v0, $v0, 0xa
    v0 = v0 << 0xa;                                             // 0x00124324: sll $v0, $v0, 0xa
    v1 = v1 - v0;                                               // 0x00124328: subu $v1, $v1, $v0
    v1 = v1 << 1;                                               // 0x0012432c: sll $v1, $v1, 1
    v1 = v1 + t1;                                               // 0x00124330: addu $v1, $v1, $t1
    if (a2 != 0) goto label_0x1242f0;                           // 0x00124334: bnez $a2, 0x1242f0
    t0 = *(int16_t*)(v1);                                       // 0x00124338: lh $t0, 0($v1)
label_0x12433c:
    v0 = t3 + 0x1be0;                                           // 0x0012433c: addiu $v0, $t3, 0x1be0
    if (s0 <= 0) goto label_0x12439c;                           // 0x00124344: blez $s0, 0x12439c
    a0 = g_002221e0;  // Global at 0x002221e0                   // 0x00124348: lh $a0, 0x600($v0)
label_0x124350:
    v1 = s1 + a3;                                               // 0x00124350: addu $v1, $s1, $a3
    a3 = a3 + 1;                                                // 0x00124354: addiu $a3, $a3, 1
    v0 = *(int8_t*)(v1);                                        // 0x00124358: lb $v0, 0($v1)
    a2 = (a3 < s0) ? 1 : 0;                                     // 0x0012435c: slt $a2, $a3, $s0
    v0 = v0 << 1;                                               // 0x00124360: sll $v0, $v0, 1
    v0 = v0 + t1;                                               // 0x00124364: addu $v0, $v0, $t1
    v1 = g_00221ce0;  // Global at 0x00221ce0                   // 0x00124368: lh $v1, 0x100($v0)
    /* multiply: a0 * v1 -> hi:lo */                            // 0x0012436c: mult $ac3, $a0, $v1
    a0 = (v1 < 0) ? 1 : 0;                                      // 0x00124370: slti $a0, $v1, 0
    a1 = v1 + 0x3ff;                                            // 0x00124374: addiu $a1, $v1, 0x3ff
    if (a0 != 0) v0 = a1;                                       // 0x0012437c: movn $v0, $a1, $a0
    v0 = v0 >> 0xa;                                             // 0x00124380: sra $v0, $v0, 0xa
    v0 = v0 << 0xa;                                             // 0x00124384: sll $v0, $v0, 0xa
    v1 = v1 - v0;                                               // 0x00124388: subu $v1, $v1, $v0
    v1 = v1 << 1;                                               // 0x0012438c: sll $v1, $v1, 1
    v1 = v1 + t1;                                               // 0x00124390: addu $v1, $v1, $t1
    if (a2 != 0) goto label_0x124350;                           // 0x00124394: bnez $a2, 0x124350
    a0 = *(int16_t*)(v1);                                       // 0x00124398: lh $a0, 0($v1)
label_0x12439c:
    *(uint16_t*)(s2) = t2;                                      // 0x0012439c: sh $t2, 0($s2)
    *(uint16_t*)(s3) = t0;                                      // 0x001243a4: sh $t0, 0($s3)
    *(uint16_t*)(s4) = a0;                                      // 0x001243a8: sh $a0, 0($s4)
label_0x1243ac:
    return;                                                     // 0x001243c4: jr $ra
    sp = sp + 0x30;                                             // 0x001243c8: addiu $sp, $sp, 0x30
}