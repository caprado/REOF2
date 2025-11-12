void func_00156758() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00156758: addiu $sp, $sp, -0x20
    v1 = -4;                                                    // 0x0015676c: addiu $v1, $zero, -4
    v0 = t3 + 4;                                                // 0x00156774: addiu $v0, $t3, 4
    t0 = v0 & v1;                                               // 0x00156778: and $t0, $v0, $v1
    v1 = t3 - t0;                                               // 0x00156780: subu $v1, $t3, $t0
    t1 = *(int8_t*)(t0);                                        // 0x00156784: lb $t1, 0($t0)
    t0 = t0 + 1;                                                // 0x00156788: addiu $t0, $t0, 1
    v1 = v1 + 4;                                                // 0x0015678c: addiu $v1, $v1, 4
    a0 = *(uint8_t*)(t0);                                       // 0x00156790: lbu $a0, 0($t0)
    t0 = t0 + 1;                                                // 0x00156794: addiu $t0, $t0, 1
    a1 = *(uint8_t*)(t0);                                       // 0x00156798: lbu $a1, 0($t0)
    t0 = t0 + 1;                                                // 0x0015679c: addiu $t0, $t0, 1
    a2 = *(uint8_t*)(t0);                                       // 0x001567a0: lbu $a2, 0($t0)
    t0 = t0 + 1;                                                // 0x001567a4: addiu $t0, $t0, 1
    a3 = *(int8_t*)(t0);                                        // 0x001567a8: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x001567ac: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x001567b0: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x001567b4: addiu $t0, $t0, 1
    t1 = t1 << 8;                                               // 0x001567b8: sll $t1, $t1, 8
    a3 = a3 << 8;                                               // 0x001567bc: sll $a3, $a3, 8
    t1 = t1 | a0;                                               // 0x001567c0: or $t1, $t1, $a0
    a0 = *(uint8_t*)(t0);                                       // 0x001567c4: lbu $a0, 0($t0)
    a3 = a3 | v0;                                               // 0x001567c8: or $a3, $a3, $v0
    t1 = t1 << 8;                                               // 0x001567cc: sll $t1, $t1, 8
    t0 = t0 + 1;                                                // 0x001567d0: addiu $t0, $t0, 1
    t1 = t1 | a1;                                               // 0x001567d4: or $t1, $t1, $a1
    a3 = a3 << 8;                                               // 0x001567d8: sll $a3, $a3, 8
    t1 = t1 << 8;                                               // 0x001567dc: sll $t1, $t1, 8
    a1 = v1 << 3;                                               // 0x001567e0: sll $a1, $v1, 3
    v1 = *(uint8_t*)(t0);                                       // 0x001567e4: lbu $v1, 0($t0)
    a3 = a3 | a0;                                               // 0x001567e8: or $a3, $a3, $a0
    t1 = t1 | a2;                                               // 0x001567ec: or $t1, $t1, $a2
    a3 = a3 << 8;                                               // 0x001567f0: sll $a3, $a3, 8
    v0 = (a1 < 0x10) ? 1 : 0;                                   // 0x001567f4: slti $v0, $a1, 0x10
    a3 = a3 | v1;                                               // 0x001567f8: or $a3, $a3, $v1
    t1 = t1 << a1;                                              // 0x001567fc: sllv $t1, $t1, $a1
    if (v0 != 0) goto label_0x156878;                           // 0x00156800: bnez $v0, 0x156878
    t0 = t0 + 1;                                                // 0x00156804: addiu $t0, $t0, 1
    a1 = a1 + -0x10;                                            // 0x00156808: addiu $a1, $a1, -0x10
    if (a1 == 0) goto label_0x156830;                           // 0x0015680c: beqz $a1, 0x156830
    v0 = 0x10;                                                  // 0x00156810: addiu $v0, $zero, 0x10
    v0 = v0 - a1;                                               // 0x00156814: subu $v0, $v0, $a1
    v0 = (unsigned)a3 >> v0;                                    // 0x00156818: srlv $v0, $a3, $v0
    t1 = t1 | v0;                                               // 0x0015681c: or $t1, $t1, $v0
    v1 = (unsigned)t1 >> 0x10;                                  // 0x00156820: srl $v1, $t1, 0x10
    t1 = a3 << a1;                                              // 0x00156824: sllv $t1, $a3, $a1
    goto label_0x15683c;                                        // 0x00156828: b 0x15683c
    *(uint32_t*)(t2) = v1;                                      // 0x0015682c: sw $v1, 0($t2)
label_0x156830:
    v0 = (unsigned)t1 >> 0x10;                                  // 0x00156830: srl $v0, $t1, 0x10
    *(uint32_t*)(t2) = v0;                                      // 0x00156838: sw $v0, 0($t2)
label_0x15683c:
    a3 = *(int8_t*)(t0);                                        // 0x0015683c: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00156840: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00156844: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00156848: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015684c: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00156850: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00156854: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00156858: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015685c: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00156860: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00156864: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00156868: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015686c: sll $a3, $a3, 8
    goto label_0x156888;                                        // 0x00156870: b 0x156888
    a3 = a3 | v0;                                               // 0x00156874: or $a3, $a3, $v0
label_0x156878:
    v0 = (unsigned)t1 >> 0x10;                                  // 0x00156878: srl $v0, $t1, 0x10
    t1 = t1 << 0x10;                                            // 0x0015687c: sll $t1, $t1, 0x10
    *(uint32_t*)(t2) = v0;                                      // 0x00156880: sw $v0, 0($t2)
    a1 = a1 + 0x10;                                             // 0x00156884: addiu $a1, $a1, 0x10
label_0x156888:
    a1 = a1 + 1;                                                // 0x00156888: addiu $a1, $a1, 1
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x0015688c: slti $v0, $a1, 0x20
    /* bnezl $v0, 0x1568d8 */                                   // 0x00156890: bnezl $v0, 0x1568d8
    t1 = t1 << 1;                                               // 0x00156894: sll $t1, $t1, 1
    a1 = a1 + -0x20;                                            // 0x00156898: addiu $a1, $a1, -0x20
    t1 = a3 << a1;                                              // 0x0015689c: sllv $t1, $a3, $a1
    a3 = *(int8_t*)(t0);                                        // 0x001568a0: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x001568a4: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x001568a8: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x001568ac: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001568b0: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x001568b4: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x001568b8: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x001568bc: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001568c0: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x001568c4: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x001568c8: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x001568cc: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001568d0: sll $a3, $a3, 8
    a3 = a3 | v0;                                               // 0x001568d4: or $a3, $a3, $v0
    v0 = (a1 < 0xa) ? 1 : 0;                                    // 0x001568d8: slti $v0, $a1, 0xa
    if (v0 != 0) goto label_0x156958;                           // 0x001568dc: bnez $v0, 0x156958
    v0 = (unsigned)t1 >> 0xa;                                   // 0x001568e0: srl $v0, $t1, 0xa
    a1 = a1 + -0xa;                                             // 0x001568e4: addiu $a1, $a1, -0xa
    if (a1 == 0) goto label_0x156910;                           // 0x001568e8: beqz $a1, 0x156910
    v0 = 0x16;                                                  // 0x001568ec: addiu $v0, $zero, 0x16
    v0 = v0 - a1;                                               // 0x001568f0: subu $v0, $v0, $a1
    v0 = (unsigned)a3 >> v0;                                    // 0x001568f4: srlv $v0, $a3, $v0
    t1 = t1 | v0;                                               // 0x001568f8: or $t1, $t1, $v0
    v1 = (unsigned)t1 >> 0xa;                                   // 0x001568fc: srl $v1, $t1, 0xa
    t1 = a3 << a1;                                              // 0x00156900: sllv $t1, $a3, $a1
    goto label_0x15691c;                                        // 0x00156904: b 0x15691c
    *(uint32_t*)((t2) + 4) = v1;                                // 0x00156908: sw $v1, 4($t2)
    /* nop */                                                   // 0x0015690c: nop 
label_0x156910:
    v0 = (unsigned)t1 >> 0xa;                                   // 0x00156910: srl $v0, $t1, 0xa
    *(uint32_t*)((t2) + 4) = v0;                                // 0x00156918: sw $v0, 4($t2)
label_0x15691c:
    a3 = *(int8_t*)(t0);                                        // 0x0015691c: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00156920: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00156924: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00156928: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015692c: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00156930: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00156934: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00156938: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015693c: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00156940: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00156944: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00156948: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015694c: sll $a3, $a3, 8
    goto label_0x156964;                                        // 0x00156950: b 0x156964
    a3 = a3 | v0;                                               // 0x00156954: or $a3, $a3, $v0
label_0x156958:
    t1 = t1 << 0x16;                                            // 0x00156958: sll $t1, $t1, 0x16
    *(uint32_t*)((t2) + 4) = v0;                                // 0x0015695c: sw $v0, 4($t2)
    a1 = a1 + 0x16;                                             // 0x00156960: addiu $a1, $a1, 0x16
label_0x156964:
    a1 = a1 + 1;                                                // 0x00156964: addiu $a1, $a1, 1
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x00156968: slti $v0, $a1, 0x20
    /* bnezl $v0, 0x1569b4 */                                   // 0x0015696c: bnezl $v0, 0x1569b4
    t1 = t1 << 1;                                               // 0x00156970: sll $t1, $t1, 1
    a1 = a1 + -0x20;                                            // 0x00156974: addiu $a1, $a1, -0x20
    t1 = a3 << a1;                                              // 0x00156978: sllv $t1, $a3, $a1
    a3 = *(int8_t*)(t0);                                        // 0x0015697c: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00156980: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00156984: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00156988: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015698c: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00156990: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00156994: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00156998: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015699c: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x001569a0: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x001569a4: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x001569a8: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001569ac: sll $a3, $a3, 8
    a3 = a3 | v0;                                               // 0x001569b0: or $a3, $a3, $v0
    v0 = (a1 < 0x1a) ? 1 : 0;                                   // 0x001569b4: slti $v0, $a1, 0x1a
    if (v0 != 0) goto label_0x156a30;                           // 0x001569b8: bnez $v0, 0x156a30
    v0 = (unsigned)t1 >> 0x1a;                                  // 0x001569bc: srl $v0, $t1, 0x1a
    a1 = a1 + -0x1a;                                            // 0x001569c0: addiu $a1, $a1, -0x1a
    if (a1 == 0) goto label_0x1569e8;                           // 0x001569c4: beqz $a1, 0x1569e8
    v0 = 6;                                                     // 0x001569c8: addiu $v0, $zero, 6
    v0 = v0 - a1;                                               // 0x001569cc: subu $v0, $v0, $a1
    v0 = (unsigned)a3 >> v0;                                    // 0x001569d0: srlv $v0, $a3, $v0
    t1 = t1 | v0;                                               // 0x001569d4: or $t1, $t1, $v0
    v1 = (unsigned)t1 >> 0x1a;                                  // 0x001569d8: srl $v1, $t1, 0x1a
    t1 = a3 << a1;                                              // 0x001569dc: sllv $t1, $a3, $a1
    goto label_0x1569f4;                                        // 0x001569e0: b 0x1569f4
    *(uint32_t*)((t2) + 8) = v1;                                // 0x001569e4: sw $v1, 8($t2)
label_0x1569e8:
    v0 = (unsigned)t1 >> 0x1a;                                  // 0x001569e8: srl $v0, $t1, 0x1a
    *(uint32_t*)((t2) + 8) = v0;                                // 0x001569f0: sw $v0, 8($t2)
label_0x1569f4:
    a3 = *(int8_t*)(t0);                                        // 0x001569f4: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x001569f8: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x001569fc: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00156a00: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156a04: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00156a08: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00156a0c: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00156a10: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156a14: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00156a18: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00156a1c: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00156a20: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156a24: sll $a3, $a3, 8
    goto label_0x156a3c;                                        // 0x00156a28: b 0x156a3c
    a3 = a3 | v0;                                               // 0x00156a2c: or $a3, $a3, $v0
label_0x156a30:
    t1 = t1 << 6;                                               // 0x00156a30: sll $t1, $t1, 6
    *(uint32_t*)((t2) + 8) = v0;                                // 0x00156a34: sw $v0, 8($t2)
    a1 = a1 + 6;                                                // 0x00156a38: addiu $a1, $a1, 6
label_0x156a3c:
    v0 = (unsigned)t1 >> 0x1f;                                  // 0x00156a3c: srl $v0, $t1, 0x1f
    v1 = 0x1f;                                                  // 0x00156a40: addiu $v1, $zero, 0x1f
    if (a1 != v1) goto label_0x156a90;                          // 0x00156a44: bne $a1, $v1, 0x156a90
    *(uint32_t*)((t2) + 0x10) = v0;                             // 0x00156a48: sw $v0, 0x10($t2)
    a3 = *(int8_t*)(t0);                                        // 0x00156a50: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00156a54: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00156a5c: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00156a60: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156a64: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00156a68: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00156a6c: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00156a70: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156a74: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00156a78: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00156a7c: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00156a80: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156a84: sll $a3, $a3, 8
    goto label_0x156a98;                                        // 0x00156a88: b 0x156a98
    a3 = a3 | v0;                                               // 0x00156a8c: or $a3, $a3, $v0
label_0x156a90:
    a1 = a1 + 1;                                                // 0x00156a90: addiu $a1, $a1, 1
    t1 = t1 << 1;                                               // 0x00156a94: sll $t1, $t1, 1
label_0x156a98:
    v0 = (unsigned)t1 >> 0x1f;                                  // 0x00156a98: srl $v0, $t1, 0x1f
    v1 = 0x1f;                                                  // 0x00156a9c: addiu $v1, $zero, 0x1f
    if (a1 != v1) goto label_0x156af0;                          // 0x00156aa0: bne $a1, $v1, 0x156af0
    *(uint32_t*)((t2) + 0x14) = v0;                             // 0x00156aa4: sw $v0, 0x14($t2)
    a3 = *(int8_t*)(t0);                                        // 0x00156aac: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00156ab0: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00156ab8: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00156abc: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156ac0: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00156ac4: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00156ac8: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00156acc: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156ad0: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00156ad4: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00156ad8: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00156adc: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156ae0: sll $a3, $a3, 8
    goto label_0x156af8;                                        // 0x00156ae4: b 0x156af8
    a3 = a3 | v0;                                               // 0x00156ae8: or $a3, $a3, $v0
    /* nop */                                                   // 0x00156aec: nop 
label_0x156af0:
    a1 = a1 + 1;                                                // 0x00156af0: addiu $a1, $a1, 1
    t1 = t1 << 1;                                               // 0x00156af4: sll $t1, $t1, 1
label_0x156af8:
    v0 = (unsigned)t1 >> 0x1f;                                  // 0x00156af8: srl $v0, $t1, 0x1f
    v1 = 0x1f;                                                  // 0x00156afc: addiu $v1, $zero, 0x1f
    if (a1 != v1) goto label_0x156b50;                          // 0x00156b00: bne $a1, $v1, 0x156b50
    *(uint32_t*)((t2) + 0x18) = v0;                             // 0x00156b04: sw $v0, 0x18($t2)
    a3 = *(int8_t*)(t0);                                        // 0x00156b0c: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00156b10: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00156b18: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00156b1c: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156b20: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00156b24: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00156b28: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00156b2c: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156b30: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00156b34: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00156b38: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00156b3c: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156b40: sll $a3, $a3, 8
    goto label_0x156b58;                                        // 0x00156b44: b 0x156b58
    a3 = a3 | v0;                                               // 0x00156b48: or $a3, $a3, $v0
    /* nop */                                                   // 0x00156b4c: nop 
label_0x156b50:
    a1 = a1 + 1;                                                // 0x00156b50: addiu $a1, $a1, 1
    t1 = t1 << 1;                                               // 0x00156b54: sll $t1, $t1, 1
label_0x156b58:
    v0 = (unsigned)t1 >> 0x1f;                                  // 0x00156b58: srl $v0, $t1, 0x1f
    v1 = 0x1f;                                                  // 0x00156b5c: addiu $v1, $zero, 0x1f
    if (a1 != v1) goto label_0x156bb0;                          // 0x00156b60: bne $a1, $v1, 0x156bb0
    *(uint32_t*)((t2) + 0x1c) = v0;                             // 0x00156b64: sw $v0, 0x1c($t2)
    a3 = *(int8_t*)(t0);                                        // 0x00156b6c: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00156b70: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00156b78: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00156b7c: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156b80: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00156b84: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00156b88: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00156b8c: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156b90: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00156b94: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00156b98: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00156b9c: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156ba0: sll $a3, $a3, 8
    goto label_0x156bb8;                                        // 0x00156ba4: b 0x156bb8
    a3 = a3 | v0;                                               // 0x00156ba8: or $a3, $a3, $v0
    /* nop */                                                   // 0x00156bac: nop 
label_0x156bb0:
    a1 = a1 + 1;                                                // 0x00156bb0: addiu $a1, $a1, 1
    t1 = t1 << 1;                                               // 0x00156bb4: sll $t1, $t1, 1
label_0x156bb8:
    a1 = a1 + 1;                                                // 0x00156bb8: addiu $a1, $a1, 1
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x00156bbc: slti $v0, $a1, 0x20
    /* bnezl $v0, 0x156c08 */                                   // 0x00156bc0: bnezl $v0, 0x156c08
    t1 = t1 << 1;                                               // 0x00156bc4: sll $t1, $t1, 1
    a1 = a1 + -0x20;                                            // 0x00156bc8: addiu $a1, $a1, -0x20
    t1 = a3 << a1;                                              // 0x00156bcc: sllv $t1, $a3, $a1
    a3 = *(int8_t*)(t0);                                        // 0x00156bd0: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00156bd4: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00156bd8: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00156bdc: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156be0: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00156be4: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00156be8: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00156bec: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156bf0: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00156bf4: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00156bf8: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00156bfc: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156c00: sll $a3, $a3, 8
    a3 = a3 | v0;                                               // 0x00156c04: or $a3, $a3, $v0
    v0 = (a1 < 0x1b) ? 1 : 0;                                   // 0x00156c08: slti $v0, $a1, 0x1b
    if (v0 != 0) goto label_0x156c88;                           // 0x00156c0c: bnez $v0, 0x156c88
    v0 = (unsigned)t1 >> 0x1b;                                  // 0x00156c10: srl $v0, $t1, 0x1b
    a1 = a1 + -0x1b;                                            // 0x00156c14: addiu $a1, $a1, -0x1b
    if (a1 == 0) goto label_0x156c40;                           // 0x00156c18: beqz $a1, 0x156c40
    v0 = 5;                                                     // 0x00156c1c: addiu $v0, $zero, 5
    v0 = v0 - a1;                                               // 0x00156c20: subu $v0, $v0, $a1
    v0 = (unsigned)a3 >> v0;                                    // 0x00156c24: srlv $v0, $a3, $v0
    t1 = t1 | v0;                                               // 0x00156c28: or $t1, $t1, $v0
    v1 = (unsigned)t1 >> 0x1b;                                  // 0x00156c2c: srl $v1, $t1, 0x1b
    t1 = a3 << a1;                                              // 0x00156c30: sllv $t1, $a3, $a1
    goto label_0x156c4c;                                        // 0x00156c34: b 0x156c4c
    *(uint32_t*)((t2) + 0xc) = v1;                              // 0x00156c38: sw $v1, 0xc($t2)
    /* nop */                                                   // 0x00156c3c: nop 
label_0x156c40:
    v0 = (unsigned)t1 >> 0x1b;                                  // 0x00156c40: srl $v0, $t1, 0x1b
    *(uint32_t*)((t2) + 0xc) = v0;                              // 0x00156c48: sw $v0, 0xc($t2)
label_0x156c4c:
    a3 = *(int8_t*)(t0);                                        // 0x00156c4c: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00156c50: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00156c54: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00156c58: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156c5c: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00156c60: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00156c64: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00156c68: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156c6c: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00156c70: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00156c74: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00156c78: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156c7c: sll $a3, $a3, 8
    goto label_0x156c94;                                        // 0x00156c80: b 0x156c94
    a3 = a3 | v0;                                               // 0x00156c84: or $a3, $a3, $v0
label_0x156c88:
    t1 = t1 << 5;                                               // 0x00156c88: sll $t1, $t1, 5
    *(uint32_t*)((t2) + 0xc) = v0;                              // 0x00156c8c: sw $v0, 0xc($t2)
    a1 = a1 + 5;                                                // 0x00156c90: addiu $a1, $a1, 5
label_0x156c94:
    a1 = a1 + 8;                                                // 0x00156c94: addiu $a1, $a1, 8
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x00156c98: slti $v0, $a1, 0x20
    /* bnezl $v0, 0x156ce4 */                                   // 0x00156c9c: bnezl $v0, 0x156ce4
    t1 = t1 << 8;                                               // 0x00156ca0: sll $t1, $t1, 8
    a1 = a1 + -0x20;                                            // 0x00156ca4: addiu $a1, $a1, -0x20
    t1 = a3 << a1;                                              // 0x00156ca8: sllv $t1, $a3, $a1
    a3 = *(int8_t*)(t0);                                        // 0x00156cac: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00156cb0: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00156cb4: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00156cb8: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156cbc: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00156cc0: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00156cc4: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00156cc8: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156ccc: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00156cd0: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00156cd4: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00156cd8: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156cdc: sll $a3, $a3, 8
    a3 = a3 | v0;                                               // 0x00156ce0: or $a3, $a3, $v0
    if (t1 >= 0) goto label_0x156d48;                           // 0x00156ce4: bgez $t1, 0x156d48
    v0 = a1 + 7;                                                // 0x00156ce8: addiu $v0, $a1, 7
    a1 = a1 + 0x18;                                             // 0x00156cec: addiu $a1, $a1, 0x18
label_0x156cf0:
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x00156cf0: slti $v0, $a1, 0x20
    /* bnezl $v0, 0x156d3c */                                   // 0x00156cf4: bnezl $v0, 0x156d3c
    t1 = t1 << 0x18;                                            // 0x00156cf8: sll $t1, $t1, 0x18
    a1 = a1 + -0x20;                                            // 0x00156cfc: addiu $a1, $a1, -0x20
    t1 = a3 << a1;                                              // 0x00156d00: sllv $t1, $a3, $a1
    a3 = *(int8_t*)(t0);                                        // 0x00156d04: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00156d08: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00156d0c: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00156d10: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156d14: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00156d18: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00156d1c: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00156d20: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156d24: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00156d28: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00156d2c: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00156d30: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00156d34: sll $a3, $a3, 8
    a3 = a3 | v0;                                               // 0x00156d38: or $a3, $a3, $v0
    if (t1 < 0) goto label_0x156cf0;                            // 0x00156d3c: bltzl $t1, 0x156cf0
    a1 = a1 + 0x18;                                             // 0x00156d40: addiu $a1, $a1, 0x18
    v0 = a1 + 7;                                                // 0x00156d44: addiu $v0, $a1, 7
label_0x156d48:
    v0 = v0 >> 3;                                               // 0x00156d48: sra $v0, $v0, 3
    s0 = t0 + v0;                                               // 0x00156d4c: addu $s0, $t0, $v0
    a0 = s0 + -8;                                               // 0x00156d50: addiu $a0, $s0, -8
    v0 = a0 - t3;                                               // 0x00156d54: subu $v0, $a0, $t3
    func_00157a80();  // 0x157a00                                // 0x00156d58: jal 0x157a00
    *(uint32_t*)(s1) = v0;                                      // 0x00156d5c: sw $v0, 0($s1)
    /* bnezl $v0, 0x156d88 */                                   // 0x00156d60: bnezl $v0, 0x156d88
    func_00157a80();  // 0x157a00                                // 0x00156d68: jal 0x157a00
    a0 = s0 + -7;                                               // 0x00156d6c: addiu $a0, $s0, -7
    v1 = 4 << 16;                                               // 0x00156d70: lui $v1, 4
    if (v0 != v1) goto label_0x156d88;                          // 0x00156d74: bne $v0, $v1, 0x156d88
    v0 = *(int32_t*)(s1);                                       // 0x00156d7c: lw $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x00156d80: addiu $v0, $v0, 1
    *(uint32_t*)(s1) = v0;                                      // 0x00156d84: sw $v0, 0($s1)
label_0x156d88:
    return;                                                     // 0x00156d90: jr $ra
    sp = sp + 0x20;                                             // 0x00156d94: addiu $sp, $sp, 0x20
}