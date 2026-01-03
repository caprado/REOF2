void func_001b11d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b11d0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b11dc: addu.qb $zero, $sp, $s1
    v1 = *(int32_t*)((a0) + 0x808);                             // 0x001b11e4: lw $v1, 0x808($a0)
    if (v1 == 0) goto label_0x1b1290;                           // 0x001b11e8: beqz $v1, 0x1b1290
    goto label_0x1b1254;                                        // 0x001b11f0: b 0x1b1254
label_0x1b11f8:
    v1 = *(int32_t*)((s2) + 0x808);                             // 0x001b11f8: lw $v1, 0x808($s2)
    v0 = s1 << 3;                                               // 0x001b11fc: sll $v0, $s1, 3
    a0 = v0 + s1;                                               // 0x001b1200: addu $a0, $v0, $s1
    a0 = a0 << 1;                                               // 0x001b1204: sll $a0, $a0, 1
    v0 = -1;                                                    // 0x001b1208: addiu $v0, $zero, -1
    a0 = a0 + s1;                                               // 0x001b120c: addu $a0, $a0, $s1
    s0 = a0 << 3;                                               // 0x001b1210: sll $s0, $a0, 3
    v1 = v1 + s0;                                               // 0x001b1214: addu $v1, $v1, $s0
    a0 = *(int32_t*)(v1);                                       // 0x001b1218: lw $a0, 0($v1)
    if (a0 == v0) goto label_0x1b1250;                          // 0x001b121c: beq $a0, $v0, 0x1b1250
    /* nop */                                                   // 0x001b1220: nop 
    if (a0 == 0) goto label_0x1b1250;                           // 0x001b1224: beqz $a0, 0x1b1250
    /* nop */                                                   // 0x001b1228: nop 
    func_0018c350();  // 18c350                                // 0x001b122c: jal 0x18c350
    /* nop */                                                   // 0x001b1230: nop 
    v0 = *(int32_t*)((s2) + 0x808);                             // 0x001b1234: lw $v0, 0x808($s2)
    v0 = v0 + s0;                                               // 0x001b1238: addu $v0, $v0, $s0
    func_001b0db0();  // 1b0db0                                // 0x001b123c: jal 0x1b0db0
    a0 = *(int32_t*)(v0);                                       // 0x001b1240: lw $a0, 0($v0)
    v0 = *(int32_t*)((s2) + 0x808);                             // 0x001b1244: lw $v0, 0x808($s2)
    v0 = v0 + s0;                                               // 0x001b1248: addu $v0, $v0, $s0
    *(uint32_t*)(v0) = 0;                                       // 0x001b124c: sw $zero, 0($v0)
label_0x1b1250:
    s1 = s1 + 1;                                                // 0x001b1250: addiu $s1, $s1, 1
label_0x1b1254:
    v0 = *(uint16_t*)((s2) + 0x812);                            // 0x001b1254: lhu $v0, 0x812($s2)
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x001b1258: slt $v0, $s1, $v0
    if (v0 != 0) goto label_0x1b11f8;                           // 0x001b125c: bnez $v0, 0x1b11f8
    func_001b17c0();  // 1b17c0                                // 0x001b1264: jal 0x1b17c0
    /* nop */                                                   // 0x001b1268: nop 
    a0 = *(int32_t*)((s2) + 0x80c);                             // 0x001b126c: lw $a0, 0x80c($s2)
    if (a0 == 0) goto label_0x1b128c;                           // 0x001b1270: beqz $a0, 0x1b128c
    /* nop */                                                   // 0x001b1274: nop 
    func_00192330();  // 192330                                // 0x001b1278: jal 0x192330
    /* nop */                                                   // 0x001b127c: nop 
    func_001b0e80();  // 1b0e80                                // 0x001b1280: jal 0x1b0e80
    a0 = *(int32_t*)((s2) + 0x80c);                             // 0x001b1284: lw $a0, 0x80c($s2)
    *(uint32_t*)((s2) + 0x80c) = 0;                             // 0x001b1288: sw $zero, 0x80c($s2)
label_0x1b128c:
    *(uint16_t*)((s2) + 0x812) = 0;                             // 0x001b128c: sh $zero, 0x812($s2)
label_0x1b1290:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b1294: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b1298: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b129c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b12a0: jr $ra
    sp = sp + 0x40;                                             // 0x001b12a4: addiu $sp, $sp, 0x40
}