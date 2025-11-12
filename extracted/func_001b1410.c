void func_001b1410() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001b1410: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b1418: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b1420: addu.qb $zero, $sp, $s1
    v0 = *(int32_t*)((a0) + 0x808);                             // 0x001b1428: lw $v0, 0x808($a0)
    if (v0 != 0) goto label_0x1b143c;                           // 0x001b142c: bnez $v0, 0x1b143c
    goto label_0x1b150c;                                        // 0x001b1434: b 0x1b150c
    s1 = 1;                                                     // 0x001b1438: addiu $s1, $zero, 1
label_0x1b143c:
    func_001d7130();  // 0x1d6f10                                // 0x001b143c: jal 0x1d6f10
    /* nop */                                                   // 0x001b1440: nop 
    s1 = 1;                                                     // 0x001b1444: addiu $s1, $zero, 1
    if (v0 != s1) goto label_0x1b1458;                          // 0x001b1448: bne $v0, $s1, 0x1b1458
    /* nop */                                                   // 0x001b144c: nop 
    goto label_0x1b1460;                                        // 0x001b1450: b 0x1b1460
label_0x1b1458:
label_0x1b1460:
    goto label_0x1b14d0;                                        // 0x001b1460: b 0x1b14d0
    v0 = *(uint16_t*)((s3) + 0x812);                            // 0x001b1464: lhu $v0, 0x812($s3)
label_0x1b1468:
    v1 = *(int32_t*)((s3) + 0x808);                             // 0x001b1468: lw $v1, 0x808($s3)
    v0 = s2 << 3;                                               // 0x001b146c: sll $v0, $s2, 3
    a0 = v0 + s2;                                               // 0x001b1470: addu $a0, $v0, $s2
    a0 = a0 << 1;                                               // 0x001b1474: sll $a0, $a0, 1
    v0 = -1;                                                    // 0x001b1478: addiu $v0, $zero, -1
    a0 = a0 + s2;                                               // 0x001b147c: addu $a0, $a0, $s2
    s0 = a0 << 3;                                               // 0x001b1480: sll $s0, $a0, 3
    v1 = v1 + s0;                                               // 0x001b1484: addu $v1, $v1, $s0
    a0 = *(int32_t*)(v1);                                       // 0x001b1488: lw $a0, 0($v1)
    if (a0 == v0) goto label_0x1b14c8;                          // 0x001b148c: beq $a0, $v0, 0x1b14c8
    /* nop */                                                   // 0x001b1490: nop 
    if (a0 == 0) goto label_0x1b14c8;                           // 0x001b1494: beqz $a0, 0x1b14c8
    /* nop */                                                   // 0x001b1498: nop 
    if (s1 != 0) goto label_0x1b14bc;                           // 0x001b149c: bnez $s1, 0x1b14bc
    /* nop */                                                   // 0x001b14a0: nop 
    func_0018c490();  // 0x18c350                                // 0x001b14a4: jal 0x18c350
    /* nop */                                                   // 0x001b14a8: nop 
    v0 = *(int32_t*)((s3) + 0x808);                             // 0x001b14ac: lw $v0, 0x808($s3)
    v0 = v0 + s0;                                               // 0x001b14b0: addu $v0, $v0, $s0
    func_001b0df0();  // 0x1b0db0                                // 0x001b14b4: jal 0x1b0db0
    a0 = *(int32_t*)(v0);                                       // 0x001b14b8: lw $a0, 0($v0)
label_0x1b14bc:
    v0 = *(int32_t*)((s3) + 0x808);                             // 0x001b14bc: lw $v0, 0x808($s3)
    v0 = v0 + s0;                                               // 0x001b14c0: addu $v0, $v0, $s0
    *(uint32_t*)(v0) = 0;                                       // 0x001b14c4: sw $zero, 0($v0)
label_0x1b14c8:
    s2 = s2 + 1;                                                // 0x001b14c8: addiu $s2, $s2, 1
    v0 = *(uint16_t*)((s3) + 0x812);                            // 0x001b14cc: lhu $v0, 0x812($s3)
label_0x1b14d0:
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x001b14d0: slt $v0, $s2, $v0
    if (v0 != 0) goto label_0x1b1468;                           // 0x001b14d4: bnez $v0, 0x1b1468
    /* nop */                                                   // 0x001b14d8: nop 
    a0 = *(int32_t*)((s3) + 0x80c);                             // 0x001b14dc: lw $a0, 0x80c($s3)
    if (a0 == 0) goto label_0x1b14fc;                           // 0x001b14e0: beqz $a0, 0x1b14fc
    /* nop */                                                   // 0x001b14e4: nop 
    func_00192350();  // 0x192330                                // 0x001b14e8: jal 0x192330
    /* nop */                                                   // 0x001b14ec: nop 
    func_001b0ec0();  // 0x1b0e80                                // 0x001b14f0: jal 0x1b0e80
    a0 = *(int32_t*)((s3) + 0x80c);                             // 0x001b14f4: lw $a0, 0x80c($s3)
    *(uint32_t*)((s3) + 0x80c) = 0;                             // 0x001b14f8: sw $zero, 0x80c($s3)
label_0x1b14fc:
    func_001b29e0();  // 0x1b28a0                                // 0x001b14fc: jal 0x1b28a0
    a0 = *(int32_t*)((s3) + 0x808);                             // 0x001b1500: lw $a0, 0x808($s3)
    *(uint32_t*)((s3) + 0x808) = 0;                             // 0x001b1504: sw $zero, 0x808($s3)
    *(uint16_t*)((s3) + 0x812) = 0;                             // 0x001b1508: sh $zero, 0x812($s3)
label_0x1b150c:
    v0 = 1;                                                     // 0x001b150c: addiu $v0, $zero, 1
    if (s1 == v0) goto label_0x1b1524;                          // 0x001b1510: beq $s1, $v0, 0x1b1524
    func_001b1870();  // 0x1b17c0                                // 0x001b1518: jal 0x1b17c0
label_0x1b1524:
    func_001b17c0();  // 0x1b1700                                // 0x001b1524: jal 0x1b1700
    /* nop */                                                   // 0x001b1528: nop 
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b1534: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b1538: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b153c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b1540: jr $ra
    sp = sp + 0x50;                                             // 0x001b1544: addiu $sp, $sp, 0x50
}