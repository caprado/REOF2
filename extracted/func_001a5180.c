void func_001a5180() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a5180: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a5188: addu.qb $zero, $sp, $s1
    func_001a5460();  // 0x1a53c0                                // 0x001a5198: jal 0x1a53c0
    if (v0 != 0) goto label_0x1a51b0;                           // 0x001a51a0: bnez $v0, 0x1a51b0
    goto label_0x1a5380;                                        // 0x001a51a8: b 0x1a5380
label_0x1a51b0:
    func_001a56b0();  // 0x1a54d0                                // 0x001a51b0: jal 0x1a54d0
    v1 = *(uint8_t*)((v0) + 0x11);                              // 0x001a51b8: lbu $v1, 0x11($v0)
    at = (v1 < 8) ? 1 : 0;                                      // 0x001a51bc: slti $at, $v1, 8
    if (at != 0) goto label_0x1a51d0;                           // 0x001a51c0: bnez $at, 0x1a51d0
    /* nop */                                                   // 0x001a51c4: nop 
    goto label_0x1a5380;                                        // 0x001a51c8: b 0x1a5380
label_0x1a51d0:
    *(uint32_t*)(s0) = 0;                                       // 0x001a51d0: sw $zero, 0($s0)
    a0 = 3;                                                     // 0x001a51d4: addiu $a0, $zero, 3
    a1 = *(uint8_t*)((v0) + 0x12);                              // 0x001a51d8: lbu $a1, 0x12($v0)
    if (a1 == a0) goto label_0x1a529c;                          // 0x001a51dc: beq $a1, $a0, 0x1a529c
    v1 = 4;                                                     // 0x001a51e0: addiu $v1, $zero, 4
    v1 = 2;                                                     // 0x001a51e4: addiu $v1, $zero, 2
    if (a1 == v1) goto label_0x1a5250;                          // 0x001a51e8: beq $a1, $v1, 0x1a5250
    a3 = 1;                                                     // 0x001a51ec: addiu $a3, $zero, 1
    if (a1 == a3) goto label_0x1a5200;                          // 0x001a51f0: beq $a1, $a3, 0x1a5200
    /* nop */                                                   // 0x001a51f4: nop 
    goto label_0x1a52ec;                                        // 0x001a51f8: b 0x1a52ec
label_0x1a5200:
    *(uint32_t*)((s0) + 0x14) = v1;                             // 0x001a5200: sw $v1, 0x14($s0)
    a2 = 5;                                                     // 0x001a5204: addiu $a2, $zero, 5
    *(uint32_t*)((s0) + 0x18) = a2;                             // 0x001a5208: sw $a2, 0x18($s0)
    a1 = 0xa;                                                   // 0x001a520c: addiu $a1, $zero, 0xa
    *(uint32_t*)((s0) + 0x1c) = a1;                             // 0x001a5210: sw $a1, 0x1c($s0)
    a0 = 0x1f;                                                  // 0x001a5214: addiu $a0, $zero, 0x1f
    *(uint32_t*)((s0) + 0x20) = a0;                             // 0x001a5218: sw $a0, 0x20($s0)
    v1 = 0xf;                                                   // 0x001a521c: addiu $v1, $zero, 0xf
    *(uint32_t*)((s0) + 0x24) = a2;                             // 0x001a5220: sw $a2, 0x24($s0)
    *(uint32_t*)((s0) + 0x28) = a2;                             // 0x001a5224: sw $a2, 0x28($s0)
    *(uint32_t*)((s0) + 0x2c) = a0;                             // 0x001a5228: sw $a0, 0x2c($s0)
    *(uint32_t*)((s0) + 0x30) = a2;                             // 0x001a522c: sw $a2, 0x30($s0)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001a5230: sw $zero, 0x34($s0)
    *(uint32_t*)((s0) + 0x38) = a0;                             // 0x001a5234: sw $a0, 0x38($s0)
    *(uint32_t*)((s0) + 0x3c) = a3;                             // 0x001a5238: sw $a3, 0x3c($s0)
    *(uint32_t*)((s0) + 0x40) = v1;                             // 0x001a523c: sw $v1, 0x40($s0)
    *(uint32_t*)((s0) + 0x44) = a3;                             // 0x001a5240: sw $a3, 0x44($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x001a5244: sw $zero, 0x1c($s0)
    goto label_0x1a52f4;                                        // 0x001a5248: b 0x1a52f4
    *(uint32_t*)((s0) + 0x34) = a1;                             // 0x001a524c: sw $a1, 0x34($s0)
label_0x1a5250:
    *(uint32_t*)((s0) + 0x14) = a0;                             // 0x001a5250: sw $a0, 0x14($s0)
    a1 = 8;                                                     // 0x001a5254: addiu $a1, $zero, 8
    *(uint32_t*)((s0) + 0x18) = a1;                             // 0x001a5258: sw $a1, 0x18($s0)
    a0 = 0x10;                                                  // 0x001a525c: addiu $a0, $zero, 0x10
    *(uint32_t*)((s0) + 0x1c) = a0;                             // 0x001a5260: sw $a0, 0x1c($s0)
    v1 = 0xff;                                                  // 0x001a5264: addiu $v1, $zero, 0xff
    *(uint32_t*)((s0) + 0x20) = v1;                             // 0x001a5268: sw $v1, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = a1;                             // 0x001a526c: sw $a1, 0x24($s0)
    *(uint32_t*)((s0) + 0x28) = a1;                             // 0x001a5270: sw $a1, 0x28($s0)
    *(uint32_t*)((s0) + 0x2c) = v1;                             // 0x001a5274: sw $v1, 0x2c($s0)
    *(uint32_t*)((s0) + 0x30) = a1;                             // 0x001a5278: sw $a1, 0x30($s0)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001a527c: sw $zero, 0x34($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x001a5280: sw $v1, 0x38($s0)
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x001a5284: sw $zero, 0x3c($s0)
    *(uint32_t*)((s0) + 0x40) = 0;                              // 0x001a5288: sw $zero, 0x40($s0)
    *(uint32_t*)((s0) + 0x44) = 0;                              // 0x001a528c: sw $zero, 0x44($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x001a5290: sw $zero, 0x1c($s0)
    goto label_0x1a52f4;                                        // 0x001a5294: b 0x1a52f4
    *(uint32_t*)((s0) + 0x34) = a0;                             // 0x001a5298: sw $a0, 0x34($s0)
label_0x1a529c:
    a2 = 8;                                                     // 0x001a529c: addiu $a2, $zero, 8
    *(uint32_t*)((s0) + 0x14) = v1;                             // 0x001a52a0: sw $v1, 0x14($s0)
    a1 = 0x10;                                                  // 0x001a52a4: addiu $a1, $zero, 0x10
    *(uint32_t*)((s0) + 0x18) = a2;                             // 0x001a52a8: sw $a2, 0x18($s0)
    a0 = 0xff;                                                  // 0x001a52ac: addiu $a0, $zero, 0xff
    *(uint32_t*)((s0) + 0x1c) = a1;                             // 0x001a52b0: sw $a1, 0x1c($s0)
    v1 = 0x18;                                                  // 0x001a52b4: addiu $v1, $zero, 0x18
    *(uint32_t*)((s0) + 0x20) = a0;                             // 0x001a52b8: sw $a0, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = a2;                             // 0x001a52bc: sw $a2, 0x24($s0)
    *(uint32_t*)((s0) + 0x28) = a2;                             // 0x001a52c0: sw $a2, 0x28($s0)
    *(uint32_t*)((s0) + 0x2c) = a0;                             // 0x001a52c4: sw $a0, 0x2c($s0)
    *(uint32_t*)((s0) + 0x30) = a2;                             // 0x001a52c8: sw $a2, 0x30($s0)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001a52cc: sw $zero, 0x34($s0)
    *(uint32_t*)((s0) + 0x38) = a0;                             // 0x001a52d0: sw $a0, 0x38($s0)
    *(uint32_t*)((s0) + 0x3c) = a2;                             // 0x001a52d4: sw $a2, 0x3c($s0)
    *(uint32_t*)((s0) + 0x40) = v1;                             // 0x001a52d8: sw $v1, 0x40($s0)
    *(uint32_t*)((s0) + 0x44) = a0;                             // 0x001a52dc: sw $a0, 0x44($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x001a52e0: sw $zero, 0x1c($s0)
    goto label_0x1a52f4;                                        // 0x001a52e4: b 0x1a52f4
    *(uint32_t*)((s0) + 0x34) = a1;                             // 0x001a52e8: sw $a1, 0x34($s0)
label_0x1a52ec:
    goto label_0x1a5384;                                        // 0x001a52ec: b 0x1a5384
label_0x1a52f4:
    a0 = *(uint8_t*)((v0) + 0x13);                              // 0x001a52f4: lbu $a0, 0x13($v0)
    v1 = 5;                                                     // 0x001a52f8: addiu $v1, $zero, 5
    if (a0 == v1) goto label_0x1a533c;                          // 0x001a52fc: beq $a0, $v1, 0x1a533c
    v1 = 4;                                                     // 0x001a5300: addiu $v1, $zero, 4
    if (a0 == v1) goto label_0x1a5314;                          // 0x001a5304: beq $a0, $v1, 0x1a5314
    /* nop */                                                   // 0x001a5308: nop 
    goto label_0x1a5364;                                        // 0x001a530c: b 0x1a5364
label_0x1a5314:
    v1 = *(uint16_t*)((v0) + 0xe);                              // 0x001a5314: lhu $v1, 0xe($v0)
    v0 = 0x10;                                                  // 0x001a5318: addiu $v0, $zero, 0x10
    if (v1 == v0) goto label_0x1a532c;                          // 0x001a531c: beq $v1, $v0, 0x1a532c
    /* nop */                                                   // 0x001a5320: nop 
    goto label_0x1a5380;                                        // 0x001a5324: b 0x1a5380
label_0x1a532c:
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001a532c: sw $v0, 4($s0)
    v0 = 1;                                                     // 0x001a5330: addiu $v0, $zero, 1
    goto label_0x1a536c;                                        // 0x001a5334: b 0x1a536c
    *(uint32_t*)((s0) + 8) = v0;                                // 0x001a5338: sw $v0, 8($s0)
label_0x1a533c:
    v1 = *(uint16_t*)((v0) + 0xe);                              // 0x001a533c: lhu $v1, 0xe($v0)
    v0 = 0x100;                                                 // 0x001a5340: addiu $v0, $zero, 0x100
    if (v1 == v0) goto label_0x1a5354;                          // 0x001a5344: beq $v1, $v0, 0x1a5354
    /* nop */                                                   // 0x001a5348: nop 
    goto label_0x1a5380;                                        // 0x001a534c: b 0x1a5380
label_0x1a5354:
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001a5354: sw $v0, 4($s0)
    v0 = 1;                                                     // 0x001a5358: addiu $v0, $zero, 1
    goto label_0x1a536c;                                        // 0x001a535c: b 0x1a536c
    *(uint32_t*)((s0) + 8) = v0;                                // 0x001a5360: sw $v0, 8($s0)
label_0x1a5364:
    goto label_0x1a5380;                                        // 0x001a5364: b 0x1a5380
    /* nop */                                                   // 0x001a5368: nop 
label_0x1a536c:
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x001a536c: lw $a0, 0x14($s0)
    v0 = 1;                                                     // 0x001a5370: addiu $v0, $zero, 1
    v1 = *(int32_t*)((s0) + 4);                                 // 0x001a5374: lw $v1, 4($s0)
    /* multiply: a0 * v1 -> hi:lo */                            // 0x001a5378: mult $ac3, $a0, $v1
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x001a537c: sw $v1, 0xc($s0)
label_0x1a5380:
label_0x1a5384:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a5384: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a5388: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a538c: jr $ra
    sp = sp + 0x30;                                             // 0x001a5390: addiu $sp, $sp, 0x30
}