void func_001b12b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001b12b0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b12b8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b12c0: addu.qb $zero, $sp, $s1
    v0 = *(int32_t*)((a0) + 0x808);                             // 0x001b12c8: lw $v0, 0x808($a0)
    if (v0 != 0) goto label_0x1b12dc;                           // 0x001b12cc: bnez $v0, 0x1b12dc
    goto label_0x1b139c;                                        // 0x001b12d4: b 0x1b139c
    v0 = 1;                                                     // 0x001b12d8: addiu $v0, $zero, 1
label_0x1b12dc:
    func_001d6310();  // 1d6310                                // 0x001b12dc: jal 0x1d6310
    /* nop */                                                   // 0x001b12e0: nop 
    v0 = v0 ^ 1;                                                // 0x001b12e4: xori $v0, $v0, 1
    goto label_0x1b1358;                                        // 0x001b12ec: b 0x1b1358
    s1 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001b12f0: sltiu $s1, $v0, 1
label_0x1b12f4:
    v1 = *(int32_t*)((s3) + 0x808);                             // 0x001b12f4: lw $v1, 0x808($s3)
    v0 = s2 << 3;                                               // 0x001b12f8: sll $v0, $s2, 3
    a0 = v0 + s2;                                               // 0x001b12fc: addu $a0, $v0, $s2
    a0 = a0 << 1;                                               // 0x001b1300: sll $a0, $a0, 1
    v0 = -1;                                                    // 0x001b1304: addiu $v0, $zero, -1
    a0 = a0 + s2;                                               // 0x001b1308: addu $a0, $a0, $s2
    s0 = a0 << 3;                                               // 0x001b130c: sll $s0, $a0, 3
    v1 = v1 + s0;                                               // 0x001b1310: addu $v1, $v1, $s0
    a0 = *(int32_t*)(v1);                                       // 0x001b1314: lw $a0, 0($v1)
    if (a0 == v0) goto label_0x1b1354;                          // 0x001b1318: beq $a0, $v0, 0x1b1354
    /* nop */                                                   // 0x001b131c: nop 
    if (a0 == 0) goto label_0x1b1354;                           // 0x001b1320: beqz $a0, 0x1b1354
    /* nop */                                                   // 0x001b1324: nop 
    if (s1 != 0) goto label_0x1b1348;                           // 0x001b1328: bnez $s1, 0x1b1348
    /* nop */                                                   // 0x001b132c: nop 
    func_0018c350();  // 18c350                                // 0x001b1330: jal 0x18c350
    /* nop */                                                   // 0x001b1334: nop 
    v0 = *(int32_t*)((s3) + 0x808);                             // 0x001b1338: lw $v0, 0x808($s3)
    v0 = v0 + s0;                                               // 0x001b133c: addu $v0, $v0, $s0
    func_001b0db0();  // 1b0db0                                // 0x001b1340: jal 0x1b0db0
    a0 = *(int32_t*)(v0);                                       // 0x001b1344: lw $a0, 0($v0)
label_0x1b1348:
    v0 = *(int32_t*)((s3) + 0x808);                             // 0x001b1348: lw $v0, 0x808($s3)
    v0 = v0 + s0;                                               // 0x001b134c: addu $v0, $v0, $s0
    *(uint32_t*)(v0) = 0;                                       // 0x001b1350: sw $zero, 0($v0)
label_0x1b1354:
    s2 = s2 + 1;                                                // 0x001b1354: addiu $s2, $s2, 1
label_0x1b1358:
    v0 = *(uint16_t*)((s3) + 0x812);                            // 0x001b1358: lhu $v0, 0x812($s3)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x001b135c: slt $v0, $s2, $v0
    if (v0 != 0) goto label_0x1b12f4;                           // 0x001b1360: bnez $v0, 0x1b12f4
    /* nop */                                                   // 0x001b1364: nop 
    a0 = *(int32_t*)((s3) + 0x80c);                             // 0x001b1368: lw $a0, 0x80c($s3)
    if (a0 == 0) goto label_0x1b1388;                           // 0x001b136c: beqz $a0, 0x1b1388
    /* nop */                                                   // 0x001b1370: nop 
    func_00192330();  // 192330                                // 0x001b1374: jal 0x192330
    /* nop */                                                   // 0x001b1378: nop 
    func_001b0e80();  // 1b0e80                                // 0x001b137c: jal 0x1b0e80
    a0 = *(int32_t*)((s3) + 0x80c);                             // 0x001b1380: lw $a0, 0x80c($s3)
    *(uint32_t*)((s3) + 0x80c) = 0;                             // 0x001b1384: sw $zero, 0x80c($s3)
label_0x1b1388:
    func_001b28a0();  // 1b28a0                                // 0x001b1388: jal 0x1b28a0
    a0 = *(int32_t*)((s3) + 0x808);                             // 0x001b138c: lw $a0, 0x808($s3)
    *(uint32_t*)((s3) + 0x808) = 0;                             // 0x001b1390: sw $zero, 0x808($s3)
    *(uint16_t*)((s3) + 0x812) = 0;                             // 0x001b1398: sh $zero, 0x812($s3)
label_0x1b139c:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b13a4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b13a8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b13ac: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b13b0: jr $ra
    sp = sp + 0x50;                                             // 0x001b13b4: addiu $sp, $sp, 0x50
}