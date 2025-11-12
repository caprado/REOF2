void func_00126458() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_8;
    
    a1 = (a1 < 0x10) ? 1 : 0;                                   // 0x00126458: slti $a1, $a1, 0x10
    t5 = local_8;                                               // 0x00126460: lw $t5, 8($sp)
    if (a1 != 0) goto label_0x126550;                           // 0x00126464: bnez $a1, 0x126550
    v0 = -1;                                                    // 0x00126468: addiu $v0, $zero, -1
    v1 = *(uint8_t*)(t4);                                       // 0x0012646c: lbu $v1, 0($t4)
    a1 = 0 | 0x8000;                                            // 0x00126470: ori $a1, $zero, 0x8000
    a0 = *(uint8_t*)((t4) + 1);                                 // 0x00126474: lbu $a0, 1($t4)
    v1 = v1 << 8;                                               // 0x00126478: sll $v1, $v1, 8
    a0 = a0 | v1;                                               // 0x0012647c: or $a0, $a0, $v1
    if (a0 != a1) goto label_0x126550;                          // 0x00126480: bne $a0, $a1, 0x126550
    v0 = -2;                                                    // 0x00126484: addiu $v0, $zero, -2
    v1 = *(uint8_t*)((t4) + 2);                                 // 0x00126488: lbu $v1, 2($t4)
    v0 = *(uint8_t*)((t4) + 3);                                 // 0x0012648c: lbu $v0, 3($t4)
    v1 = v1 << 8;                                               // 0x00126490: sll $v1, $v1, 8
    v0 = v0 | v1;                                               // 0x00126494: or $v0, $v0, $v1
    v0 = v0 + 4;                                                // 0x00126498: addiu $v0, $v0, 4
    *(uint16_t*)(a2) = v0;                                      // 0x0012649c: sh $v0, 0($a2)
    v1 = *(uint8_t*)((t4) + 4);                                 // 0x001264a0: lbu $v1, 4($t4)
    *(uint8_t*)(a3) = v1;                                       // 0x001264a4: sb $v1, 0($a3)
    v0 = *(uint8_t*)((t4) + 5);                                 // 0x001264a8: lbu $v0, 5($t4)
    *(uint8_t*)(t1) = v0;                                       // 0x001264ac: sb $v0, 0($t1)
    v1 = *(uint8_t*)((t4) + 6);                                 // 0x001264b0: lbu $v1, 6($t4)
    *(uint8_t*)(t0) = v1;                                       // 0x001264b4: sb $v1, 0($t0)
    a0 = *(uint8_t*)((t4) + 7);                                 // 0x001264b8: lbu $a0, 7($t4)
    *(uint8_t*)(t2) = a0;                                       // 0x001264bc: sb $a0, 0($t2)
    v0 = *(uint8_t*)((t4) + 8);                                 // 0x001264c0: lbu $v0, 8($t4)
    v1 = *(uint8_t*)((t4) + 0xa);                               // 0x001264c4: lbu $v1, 0xa($t4)
    a0 = *(uint8_t*)((t4) + 9);                                 // 0x001264c8: lbu $a0, 9($t4)
    v0 = v0 << 0x18;                                            // 0x001264cc: sll $v0, $v0, 0x18
    a1 = *(uint8_t*)((t4) + 0xb);                               // 0x001264d0: lbu $a1, 0xb($t4)
    v1 = v1 << 8;                                               // 0x001264d4: sll $v1, $v1, 8
    a0 = a0 << 0x10;                                            // 0x001264d8: sll $a0, $a0, 0x10
    v1 = v1 | a0;                                               // 0x001264dc: or $v1, $v1, $a0
    v0 = v0 | a1;                                               // 0x001264e0: or $v0, $v0, $a1
    v0 = v0 | v1;                                               // 0x001264e4: or $v0, $v0, $v1
    *(uint32_t*)(t3) = v0;                                      // 0x001264e8: sw $v0, 0($t3)
    v1 = *(uint8_t*)((t4) + 0xd);                               // 0x001264ec: lbu $v1, 0xd($t4)
    v0 = *(uint8_t*)((t4) + 0xc);                               // 0x001264f0: lbu $v0, 0xc($t4)
    a0 = *(uint8_t*)((t4) + 0xe);                               // 0x001264f4: lbu $a0, 0xe($t4)
    v1 = v1 << 0x10;                                            // 0x001264f8: sll $v1, $v1, 0x10
    a1 = *(uint8_t*)((t4) + 0xf);                               // 0x001264fc: lbu $a1, 0xf($t4)
    v0 = v0 << 0x18;                                            // 0x00126500: sll $v0, $v0, 0x18
    a0 = a0 << 8;                                               // 0x00126504: sll $a0, $a0, 8
    a0 = a0 | v1;                                               // 0x00126508: or $a0, $a0, $v1
    v1 = local_0;                                               // 0x0012650c: lw $v1, 0($sp)
    v0 = v0 | a1;                                               // 0x00126510: or $v0, $v0, $a1
    v0 = v0 | a0;                                               // 0x00126514: or $v0, $v0, $a0
    *(uint32_t*)(v1) = v0;                                      // 0x00126518: sw $v0, 0($v1)
    t0 = *(int8_t*)(t0);                                        // 0x0012651c: lb $t0, 0($t0)
    /* bnezl $t0, 0x126530 */                                   // 0x00126520: bnezl $t0, 0x126530
    v0 = *(int8_t*)(t1);                                        // 0x00126524: lb $v0, 0($t1)
    goto label_0x12654c;                                        // 0x00126528: b 0x12654c
    *(uint32_t*)(t5) = 0;                                       // 0x0012652c: sw $zero, 0($t5)
    /* beqzl $t0, 0x126538 */                                   // 0x00126530: beqzl $t0, 0x126538
    /* break (trap) */                                          // 0x00126534: break 0, 7
    v0 = v0 << 3;                                               // 0x00126538: sll $v0, $v0, 3
    v0 = v0 + -0x10;                                            // 0x0012653c: addiu $v0, $v0, -0x10
    /* divide: v0 / t0 -> hi:lo */                              // 0x00126540: div $zero, $v0, $t0
    /* mflo $v0 */                                              // 0x00126544
    *(uint32_t*)(t5) = v0;                                      // 0x00126548: sw $v0, 0($t5)
label_0x12654c:
label_0x126550:
    return;                                                     // 0x00126550: jr $ra
    /* nop */                                                   // 0x00126554: nop 
}