void func_00151538() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t2 = a0 + 0x128;                                            // 0x00151538: addiu $t2, $a0, 0x128
    a0 = 1;                                                     // 0x0015153c: addiu $a0, $zero, 1
    v1 = *(int32_t*)((t2) + 0x4e8);                             // 0x00151540: lw $v1, 0x4e8($t2)
    *(uint32_t*)((t2) + 0x4dc) = a0;                            // 0x00151548: sw $a0, 0x4dc($t2)
    v0 = -4;                                                    // 0x0015154c: addiu $v0, $zero, -4
    v1 = v1 + 1;                                                // 0x00151550: addiu $v1, $v1, 1
    t0 = t4 & v0;                                               // 0x00151554: and $t0, $t4, $v0
    *(uint32_t*)((t2) + 0x4e8) = v1;                            // 0x00151558: sw $v1, 0x4e8($t2)
    v0 = t4 - t0;                                               // 0x0015155c: subu $v0, $t4, $t0
    t3 = v0 << 3;                                               // 0x00151560: sll $t3, $v0, 3
    t1 = *(int8_t*)(t0);                                        // 0x00151564: lb $t1, 0($t0)
    t0 = t0 + 1;                                                // 0x00151568: addiu $t0, $t0, 1
    a0 = *(uint8_t*)(t0);                                       // 0x0015156c: lbu $a0, 0($t0)
    t0 = t0 + 1;                                                // 0x00151570: addiu $t0, $t0, 1
    a2 = *(uint8_t*)(t0);                                       // 0x00151574: lbu $a2, 0($t0)
    t0 = t0 + 1;                                                // 0x00151578: addiu $t0, $t0, 1
    a3 = *(uint8_t*)(t0);                                       // 0x0015157c: lbu $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00151580: addiu $t0, $t0, 1
    v0 = *(int8_t*)(t0);                                        // 0x00151584: lb $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00151588: addiu $t0, $t0, 1
    v1 = *(uint8_t*)(t0);                                       // 0x0015158c: lbu $v1, 0($t0)
    t0 = t0 + 1;                                                // 0x00151590: addiu $t0, $t0, 1
    t1 = t1 << 8;                                               // 0x00151594: sll $t1, $t1, 8
    v0 = v0 << 8;                                               // 0x00151598: sll $v0, $v0, 8
    t1 = t1 | a0;                                               // 0x0015159c: or $t1, $t1, $a0
    a0 = *(uint8_t*)(t0);                                       // 0x001515a0: lbu $a0, 0($t0)
    v0 = v0 | v1;                                               // 0x001515a4: or $v0, $v0, $v1
    t1 = t1 << 8;                                               // 0x001515a8: sll $t1, $t1, 8
    t0 = t0 + 1;                                                // 0x001515ac: addiu $t0, $t0, 1
    v0 = v0 << 8;                                               // 0x001515b0: sll $v0, $v0, 8
    v1 = *(uint8_t*)(t0);                                       // 0x001515b4: lbu $v1, 0($t0)
    t0 = t0 + 1;                                                // 0x001515b8: addiu $t0, $t0, 1
    t1 = t1 | a2;                                               // 0x001515bc: or $t1, $t1, $a2
    v0 = v0 | a0;                                               // 0x001515c0: or $v0, $v0, $a0
    t1 = t1 << 8;                                               // 0x001515c4: sll $t1, $t1, 8
    v0 = v0 << 8;                                               // 0x001515c8: sll $v0, $v0, 8
    a1 = -t3;                                                   // 0x001515cc: negu $a1, $t3
    t1 = t1 | a3;                                               // 0x001515d0: or $t1, $t1, $a3
    v0 = v0 | v1;                                               // 0x001515d4: or $v0, $v0, $v1
    t1 = t1 << t3;                                              // 0x001515d8: sllv $t1, $t1, $t3
    v0 = (unsigned)v0 >> a1;                                    // 0x001515dc: srlv $v0, $v0, $a1
    t0 = t0 + 4;                                                // 0x001515e0: addiu $t0, $t0, 4
    if (t3 == 0) goto label_0x1515f8;                           // 0x001515e4: beqz $t3, 0x1515f8
    v0 = t1 | v0;                                               // 0x001515e8: or $v0, $t1, $v0
    goto label_0x1515fc;                                        // 0x001515ec: b 0x1515fc
    *(uint32_t*)((t2) + 0x2c) = v0;                             // 0x001515f0: sw $v0, 0x2c($t2)
    /* nop */                                                   // 0x001515f4: nop 
label_0x1515f8:
    *(uint32_t*)((t2) + 0x2c) = t1;                             // 0x001515f8: sw $t1, 0x2c($t2)
label_0x1515fc:
    v1 = t0 - t4;                                               // 0x001515fc: subu $v1, $t0, $t4
    *(uint32_t*)((t2) + 0x32c) = 0;                             // 0x00151600: sw $zero, 0x32c($t2)
    v1 = v1 << 3;                                               // 0x00151604: sll $v1, $v1, 3
    *(uint32_t*)((t2) + 0x328) = 0;                             // 0x00151608: sw $zero, 0x328($t2)
    v1 = t3 + v1;                                               // 0x0015160c: addu $v1, $t3, $v1
    v0 = v1 + -0x39;                                            // 0x00151610: addiu $v0, $v1, -0x39
    v1 = v1 + -0x32;                                            // 0x00151614: addiu $v1, $v1, -0x32
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x00151618: slti $a0, $v0, 0
    if (a0 != 0) v0 = v1;                                       // 0x0015161c: movn $v0, $v1, $a0
    v0 = v0 >> 3;                                               // 0x00151620: sra $v0, $v0, 3
    return;                                                     // 0x00151624: jr $ra
    v0 = t4 + v0;                                               // 0x00151628: addu $v0, $t4, $v0
}