void func_00130838() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00130838: addiu $sp, $sp, -0x20
    v0 = *(int8_t*)((s0) + 2);                                  // 0x0013084c: lb $v0, 2($s0)
    /* bnezl $v0, 0x1309cc */                                   // 0x00130850: bnezl $v0, 0x1309cc
    v1 = *(int8_t*)((s0) + 1);                                  // 0x00130854: lb $v1, 1($s0)
    v1 = *(int8_t*)((s0) + 0x44);                               // 0x00130858: lb $v1, 0x44($s0)
    v0 = 1;                                                     // 0x0013085c: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x130880;                          // 0x00130860: bnel $v1, $v0, 0x130880
    v1 = *(int8_t*)((s0) + 0x42);                               // 0x00130864: lb $v1, 0x42($s0)
    v0 = *(int8_t*)((s0) + 0x43);                               // 0x00130868: lb $v0, 0x43($s0)
    if (v0 != 0) goto label_0x130878;                           // 0x0013086c: bnez $v0, 0x130878
    *(uint8_t*)((s0) + 0x44) = 0;                               // 0x00130870: sb $zero, 0x44($s0)
    *(uint8_t*)((s0) + 1) = v1;                                 // 0x00130874: sb $v1, 1($s0)
label_0x130878:
    v1 = *(int8_t*)((s0) + 0x42);                               // 0x00130878: lb $v1, 0x42($s0)
    v0 = 1;                                                     // 0x0013087c: addiu $v0, $zero, 1
label_0x130880:
    if (v1 != v0) goto label_0x1308a4;                          // 0x00130880: bne $v1, $v0, 0x1308a4
    /* nop */                                                   // 0x00130884: nop 
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00130888: lw $a0, 8($s0)
    /* beqzl $a0, 0x1308a0 */                                   // 0x0013088c: beqzl $a0, 0x1308a0
    *(uint8_t*)((s0) + 0x42) = 0;                               // 0x00130890: sb $zero, 0x42($s0)
    func_00135940();  // 135940                                // 0x00130894: jal 0x135940
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x00130898: sw $zero, 8($s0)
    *(uint8_t*)((s0) + 0x42) = 0;                               // 0x0013089c: sb $zero, 0x42($s0)
    *(uint8_t*)((s0) + 0x45) = 0;                               // 0x001308a0: sb $zero, 0x45($s0)
label_0x1308a4:
    func_00141390();  // 141390                                // 0x001308a4: jal 0x141390
    /* nop */                                                   // 0x001308a8: nop 
    v1 = *(int8_t*)((s0) + 0x41);                               // 0x001308ac: lb $v1, 0x41($s0)
    v0 = 1;                                                     // 0x001308b0: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1309b0;                          // 0x001308b4: bne $v1, $v0, 0x1309b0
    /* nop */                                                   // 0x001308b8: nop 
    func_001413a8();  // 1413a8                                // 0x001308bc: jal 0x1413a8
    *(uint8_t*)((s0) + 0x45) = v1;                              // 0x001308c0: sb $v1, 0x45($s0)
    v0 = *(int32_t*)((s0) + 8);                                 // 0x001308c4: lw $v0, 8($s0)
    /* bnezl $v0, 0x1309bc */                                   // 0x001308c8: bnezl $v0, 0x1309bc
    v1 = *(int8_t*)((s0) + 0x43);                               // 0x001308cc: lb $v1, 0x43($s0)
    a0 = *(int32_t*)((s0) + 0x4c);                              // 0x001308d0: lw $a0, 0x4c($s0)
    func_001355f0();  // 1355f0                                // 0x001308d8: jal 0x1355f0
    a1 = *(int32_t*)((s0) + 0x50);                              // 0x001308dc: lw $a1, 0x50($s0)
    if (v0 != 0) goto label_0x130910;                           // 0x001308e0: bnez $v0, 0x130910
    *(uint32_t*)((s0) + 8) = v0;                                // 0x001308e4: sw $v0, 8($s0)
    a0 = 0x22 << 16;                                            // 0x001308e8: lui $a0, 0x22
    a1 = *(int32_t*)((s0) + 0x4c);                              // 0x001308ec: lw $a1, 0x4c($s0)
    func_00127de8();  // 127de8                                // 0x001308f0: jal 0x127de8
    a0 = &str_00223690;  // "ntmp0=%4d, ntmp2=%4d, sum=%4d\n"   // 0x001308f4: addiu $a0, $a0, 0x3690
    v0 = 4;                                                     // 0x001308f8: addiu $v0, $zero, 4
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x001308fc: sb $v0, 1($s0)
    *(uint8_t*)((s0) + 0x41) = 0;                               // 0x00130900: sb $zero, 0x41($s0)
    goto label_0x1309f0;                                        // 0x00130904: b 0x1309f0
    *(uint8_t*)((s0) + 0x45) = 0;                               // 0x00130908: sb $zero, 0x45($s0)
    /* nop */                                                   // 0x0013090c: nop 
label_0x130910:
    a2 = 2;                                                     // 0x00130914: addiu $a2, $zero, 2
    func_00135a20();  // 135a20                                // 0x00130918: jal 0x135a20
    func_001359b8();  // 1359b8                                // 0x00130920: jal 0x1359b8
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00130924: lw $a0, 8($s0)
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00130928: lw $a0, 8($s0)
    func_00135a20();  // 135a20                                // 0x00130934: jal 0x135a20
    v0 = 0x7fff << 16;                                          // 0x0013093c: lui $v0, 0x7fff
    a1 = *(int32_t*)((s0) + 0x10);                              // 0x00130940: lw $a1, 0x10($s0)
    v0 = v0 | 0xf800;                                           // 0x00130944: ori $v0, $v0, 0xf800
    if (a1 != v0) goto label_0x130958;                          // 0x00130948: bne $a1, $v0, 0x130958
    v1 = s1 << 0xb;                                             // 0x0013094c: sll $v1, $s1, 0xb
    goto label_0x130998;                                        // 0x00130950: b 0x130998
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x00130954: sw $v1, 0x10($s0)
label_0x130958:
    a2 = *(int32_t*)((s0) + 0xc);                               // 0x00130958: lw $a2, 0xc($s0)
    v0 = (s1 < a2) ? 1 : 0;                                     // 0x0013095c: slt $v0, $s1, $a2
    if (v0 == 0) goto label_0x130970;                           // 0x00130960: beqz $v0, 0x130970
    a0 = a1 + 0x7ff;                                            // 0x00130964: addiu $a0, $a1, 0x7ff
    *(uint32_t*)((s0) + 0xc) = s1;                              // 0x00130968: sw $s1, 0xc($s0)
label_0x130970:
    v1 = (a1 < 0) ? 1 : 0;                                      // 0x00130970: slti $v1, $a1, 0
    if (v1 != 0) a1 = a0;                                       // 0x00130974: movn $a1, $a0, $v1
    v0 = a1 >> 0xb;                                             // 0x00130978: sra $v0, $a1, 0xb
    v0 = v0 + a2;                                               // 0x0013097c: addu $v0, $v0, $a2
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x00130980: slt $v0, $s1, $v0
    if (v0 == 0) goto label_0x13099c;                           // 0x00130984: beqz $v0, 0x13099c
    v0 = s1 - a2;                                               // 0x0013098c: subu $v0, $s1, $a2
    v0 = v0 << 0xb;                                             // 0x00130990: sll $v0, $v0, 0xb
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x00130994: sw $v0, 0x10($s0)
label_0x130998:
label_0x13099c:
    func_00130280();  // 130280                                // 0x0013099c: jal 0x130280
    goto label_0x1309b8;                                        // 0x001309a4: b 0x1309b8
    *(uint8_t*)((s0) + 0x41) = 0;                               // 0x001309a8: sb $zero, 0x41($s0)
    /* nop */                                                   // 0x001309ac: nop 
label_0x1309b0:
    func_001413a8();  // 1413a8                                // 0x001309b0: jal 0x1413a8
    /* nop */                                                   // 0x001309b4: nop 
label_0x1309b8:
    v1 = *(int8_t*)((s0) + 0x43);                               // 0x001309b8: lb $v1, 0x43($s0)
    v0 = 1;                                                     // 0x001309bc: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1309c8;                          // 0x001309c0: beql $v1, $v0, 0x1309c8
    *(uint8_t*)((s0) + 0x43) = 0;                               // 0x001309c4: sb $zero, 0x43($s0)
label_0x1309c8:
    v1 = *(int8_t*)((s0) + 1);                                  // 0x001309c8: lb $v1, 1($s0)
    v0 = 2;                                                     // 0x001309cc: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x1309f4;                          // 0x001309d0: bnel $v1, $v0, 0x1309f4
    v1 = *(int8_t*)((s0) + 0x45);                               // 0x001309d8: lb $v1, 0x45($s0)
    v0 = 1;                                                     // 0x001309dc: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1309f4;                          // 0x001309e0: bnel $v1, $v0, 0x1309f4
    func_001304c0();  // 1304c0                                // 0x001309e8: jal 0x1304c0
label_0x1309f0:
label_0x1309f4:
    return;                                                     // 0x001309fc: jr $ra
    sp = sp + 0x20;                                             // 0x00130a00: addiu $sp, $sp, 0x20
}