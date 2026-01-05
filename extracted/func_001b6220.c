void func_001b6220() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_48;
    
    sp = sp + -0x50;                                            // 0x001b6220: addiu $sp, $sp, -0x50
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b622c: addu.qb $zero, $sp, $s1
    s0 = sp + 0x4a;                                             // 0x001b623c: addiu $s0, $sp, 0x4a
label_0x1b6240:
    v1 = *(uint8_t*)(s1);                                       // 0x001b6240: lbu $v1, 0($s1)
    if (v1 == 0) goto label_0x1b6334;                           // 0x001b6244: beqz $v1, 0x1b6334
    s1 = s1 + 1;                                                // 0x001b6248: addiu $s1, $s1, 1
    v0 = 0xa;                                                   // 0x001b624c: addiu $v0, $zero, 0xa
    if (v1 == v0) goto label_0x1b6240;                          // 0x001b6250: beq $v1, $v0, 0x1b6240
    v0 = (v1 < 0x80) ? 1 : 0;                                   // 0x001b6254: slti $v0, $v1, 0x80
    if (v0 != 0) goto label_0x1b6268;                           // 0x001b6258: bnez $v0, 0x1b6268
    at = (v1 < 0xa0) ? 1 : 0;                                   // 0x001b625c: slti $at, $v1, 0xa0
    if (at != 0) goto label_0x1b6280;                           // 0x001b6260: bnez $at, 0x1b6280
    /* nop */                                                   // 0x001b6264: nop 
label_0x1b6268:
    v0 = (v1 < 0xe0) ? 1 : 0;                                   // 0x001b6268: slti $v0, $v1, 0xe0
    if (v0 != 0) goto label_0x1b6294;                           // 0x001b626c: bnez $v0, 0x1b6294
    v0 = 0x3c;                                                  // 0x001b6270: addiu $v0, $zero, 0x3c
    at = (v1 < 0x100) ? 1 : 0;                                  // 0x001b6274: slti $at, $v1, 0x100
    if (at == 0) goto label_0x1b6294;                           // 0x001b6278: beqz $at, 0x1b6294
    /* nop */                                                   // 0x001b627c: nop 
label_0x1b6280:
    v0 = *(uint8_t*)(s1);                                       // 0x001b6280: lbu $v0, 0($s1)
    if (v0 == 0) goto label_0x1b6334;                           // 0x001b6284: beqz $v0, 0x1b6334
    s1 = s1 + 1;                                                // 0x001b6288: addiu $s1, $s1, 1
    goto label_0x1b6240;                                        // 0x001b628c: b 0x1b6240
    s2 = s2 + 2;                                                // 0x001b6290: addiu $s2, $s2, 2
label_0x1b6294:
    if (v1 != v0) goto label_0x1b632c;                          // 0x001b6294: bne $v1, $v0, 0x1b632c
    /* nop */                                                   // 0x001b6298: nop 
    local_48 = v1;                                              // 0x001b629c: sb $v1, 0x48($sp)
    goto label_0x1b62cc;                                        // 0x001b62a0: b 0x1b62cc
    a0 = 1;                                                     // 0x001b62a4: addiu $a0, $zero, 1
label_0x1b62a8:
    v0 = *(uint8_t*)((v0) + -1);                                // 0x001b62a8: lbu $v0, -1($v0)
    if (v0 == 0) goto label_0x1b62dc;                           // 0x001b62ac: beqz $v0, 0x1b62dc
    v0 = a0 + sp;                                               // 0x001b62b0: addu $v0, $a0, $sp
    v1 = a0 + -1;                                               // 0x001b62b4: addiu $v1, $a0, -1
    v0 = a0 + sp;                                               // 0x001b62b8: addu $v0, $a0, $sp
    v1 = s1 + v1;                                               // 0x001b62bc: addu $v1, $s1, $v1
    a0 = a0 + 1;                                                // 0x001b62c0: addiu $a0, $a0, 1
    v1 = *(uint8_t*)(v1);                                       // 0x001b62c4: lbu $v1, 0($v1)
    *(uint8_t*)((v0) + 0x48) = v1;                              // 0x001b62c8: sb $v1, 0x48($v0)
label_0x1b62cc:
    v0 = (a0 < 4) ? 1 : 0;                                      // 0x001b62cc: slti $v0, $a0, 4
    if (v0 != 0) goto label_0x1b62a8;                           // 0x001b62d0: bnez $v0, 0x1b62a8
    v0 = s1 + a0;                                               // 0x001b62d4: addu $v0, $s1, $a0
    v0 = a0 + sp;                                               // 0x001b62d8: addu $v0, $a0, $sp
label_0x1b62dc:
    *(uint8_t*)((v0) + 0x48) = 0;                               // 0x001b62dc: sb $zero, 0x48($v0)
    v0 = *(int8_t*)(s0);                                        // 0x001b62e0: lb $v0, 0($s0)
    if (v0 == 0) goto label_0x1b62f4;                           // 0x001b62e4: beqz $v0, 0x1b62f4
    a1 = 0x24 << 16;                                            // 0x001b62e8: lui $a1, 0x24
    v0 = 0x20;                                                  // 0x001b62ec: addiu $v0, $zero, 0x20
    *(uint8_t*)(s0) = v0;                                       // 0x001b62f0: sb $v0, 0($s0)
label_0x1b62f4:
    a0 = sp + 0x48;                                             // 0x001b62f4: addiu $a0, $sp, 0x48
    func_0010ab20();  // 10ab20                                // 0x001b62f8: jal 0x10ab20
    a1 = a1 + -0x2438;                                          // 0x001b62fc: addiu $a1, $a1, -0x2438
    if (v0 != 0) goto label_0x1b6310;                           // 0x001b6300: bnez $v0, 0x1b6310
    a1 = 0x24 << 16;                                            // 0x001b6304: lui $a1, 0x24
    goto label_0x1b6240;                                        // 0x001b6308: b 0x1b6240
    s1 = s1 + 3;                                                // 0x001b630c: addiu $s1, $s1, 3
label_0x1b6310:
    a0 = sp + 0x48;                                             // 0x001b6310: addiu $a0, $sp, 0x48
    func_0010ab20();  // 10ab20                                // 0x001b6314: jal 0x10ab20
    a1 = a1 + -0x2430;                                          // 0x001b6318: addiu $a1, $a1, -0x2430
    if (v0 != 0) goto label_0x1b632c;                           // 0x001b631c: bnez $v0, 0x1b632c
    /* nop */                                                   // 0x001b6320: nop 
    goto label_0x1b6240;                                        // 0x001b6324: b 0x1b6240
    s1 = s1 + 3;                                                // 0x001b6328: addiu $s1, $s1, 3
label_0x1b632c:
    goto label_0x1b6240;                                        // 0x001b632c: b 0x1b6240
    s2 = s2 + 1;                                                // 0x001b6330: addiu $s2, $s2, 1
label_0x1b6334:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b633c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b6340: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b6344: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b6348: jr $ra
    sp = sp + 0x50;                                             // 0x001b634c: addiu $sp, $sp, 0x50
}