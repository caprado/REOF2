void func_00125538() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_8;
    
    t7 = 1;                                                     // 0x0012553c: addiu $t7, $zero, 1
    v0 = *(uint8_t*)((t4) + 7);                                 // 0x00125540: lbu $v0, 7($t4)
    a1 = local_10;                                              // 0x00125544: lw $a1, 0x10($sp)
    v0 = v0 << 4;                                               // 0x00125548: sll $v0, $v0, 4
    t5 = local_8;                                               // 0x0012554c: lw $t5, 8($sp)
    *(uint16_t*)(a2) = v0;                                      // 0x00125550: sh $v0, 0($a2)
    t6 = local_0;                                               // 0x00125554: lw $t6, 0($sp)
    v0 = *(uint8_t*)((t4) + 9);                                 // 0x00125558: lbu $v0, 9($t4)
    v0 = v0 & 3;                                                // 0x0012555c: andi $v0, $v0, 3
    v0 = v0 + 1;                                                // 0x00125560: addiu $v0, $v0, 1
    *(uint8_t*)(t2) = v0;                                       // 0x00125564: sb $v0, 0($t2)
    v1 = *(uint16_t*)((t4) + 0x2a);                             // 0x00125568: lhu $v1, 0x2a($t4)
    *(uint32_t*)(t3) = v1;                                      // 0x0012556c: sw $v1, 0($t3)
    a0 = *(uint8_t*)((t4) + 8);                                 // 0x00125570: lbu $a0, 8($t4)
    if (a0 == t7) goto label_0x1255d8;                          // 0x00125574: beq $a0, $t7, 0x1255d8
    v0 = (a0 < 2) ? 1 : 0;                                      // 0x00125578: slti $v0, $a0, 2
    /* beqzl $v0, 0x125598 */                                   // 0x0012557c: beqzl $v0, 0x125598
    v0 = (a0 < 4) ? 1 : 0;                                      // 0x00125580: slti $v0, $a0, 4
    /* beqzl $a0, 0x1255a8 */                                   // 0x00125584: beqzl $a0, 0x1255a8
    v1 = 0x10;                                                  // 0x00125588: addiu $v1, $zero, 0x10
    goto label_0x125620;                                        // 0x0012558c: b 0x125620
    v1 = 2;                                                     // 0x00125590: addiu $v1, $zero, 2
    /* nop */                                                   // 0x00125594: nop 
    /* beqzl $v0, 0x125620 */                                   // 0x00125598: beqzl $v0, 0x125620
    v1 = 2;                                                     // 0x0012559c: addiu $v1, $zero, 2
    goto label_0x1255f8;                                        // 0x001255a0: b 0x1255f8
    v1 = 4;                                                     // 0x001255a4: addiu $v1, $zero, 4
    *(uint8_t*)(t0) = v1;                                       // 0x001255a8: sb $v1, 0($t0)
    v0 = *(int8_t*)(t2);                                        // 0x001255ac: lb $v0, 0($t2)
    v0 = v0 << 1;                                               // 0x001255b0: sll $v0, $v0, 1
    *(uint8_t*)(t1) = v0;                                       // 0x001255b4: sb $v0, 0($t1)
    *(uint32_t*)(t5) = t7;                                      // 0x001255b8: sw $t7, 0($t5)
    *(uint16_t*)(a1) = 0;                                       // 0x001255bc: sh $zero, 0($a1)
    v0 = *(int32_t*)((t4) + 0xc);                               // 0x001255c0: lw $v0, 0xc($t4)
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x001255c4: srl $v1, $v0, 0x1f
    v0 = v0 + v1;                                               // 0x001255c8: addu $v0, $v0, $v1
    goto label_0x125618;                                        // 0x001255cc: b 0x125618
    v0 = v0 >> 1;                                               // 0x001255d0: sra $v0, $v0, 1
    /* nop */                                                   // 0x001255d4: nop 
label_0x1255d8:
    v0 = 8;                                                     // 0x001255d8: addiu $v0, $zero, 8
    *(uint8_t*)(t0) = v0;                                       // 0x001255dc: sb $v0, 0($t0)
    v1 = *(int8_t*)(t2);                                        // 0x001255e0: lb $v1, 0($t2)
    *(uint8_t*)(t1) = v1;                                       // 0x001255e4: sb $v1, 0($t1)
    *(uint32_t*)(t5) = a0;                                      // 0x001255e8: sw $a0, 0($t5)
    *(uint16_t*)(a1) = a0;                                      // 0x001255ec: sh $a0, 0($a1)
    goto label_0x125618;                                        // 0x001255f0: b 0x125618
    v0 = *(int32_t*)((t4) + 0xc);                               // 0x001255f4: lw $v0, 0xc($t4)
label_0x1255f8:
    a0 = 2;                                                     // 0x001255f8: addiu $a0, $zero, 2
    *(uint8_t*)(t0) = v1;                                       // 0x001255fc: sb $v1, 0($t0)
    v0 = *(int8_t*)(t2);                                        // 0x00125600: lb $v0, 0($t2)
    *(uint8_t*)(t1) = v0;                                       // 0x00125604: sb $v0, 0($t1)
    *(uint32_t*)(t5) = a0;                                      // 0x00125608: sw $a0, 0($t5)
    *(uint16_t*)(a1) = a0;                                      // 0x0012560c: sh $a0, 0($a1)
    v0 = *(int32_t*)((t4) + 0xc);                               // 0x00125610: lw $v0, 0xc($t4)
    v0 = v0 << 1;                                               // 0x00125614: sll $v0, $v0, 1
label_0x125618:
    *(uint32_t*)(t6) = v0;                                      // 0x00125618: sw $v0, 0($t6)
    v1 = 2;                                                     // 0x0012561c: addiu $v1, $zero, 2
label_0x125620:
    a0 = 1;                                                     // 0x00125620: addiu $a0, $zero, 1
    *(uint8_t*)(t1) = v1;                                       // 0x00125624: sb $v1, 0($t1)
    a1 = 0x10;                                                  // 0x00125628: addiu $a1, $zero, 0x10
    *(uint32_t*)(t5) = a0;                                      // 0x0012562c: sw $a0, 0($t5)
    a2 = -1;                                                    // 0x00125630: addiu $a2, $zero, -1
    v1 = *(int32_t*)((t4) + 0xc);                               // 0x00125638: lw $v1, 0xc($t4)
    a0 = (unsigned)v1 >> 0x1f;                                  // 0x0012563c: srl $a0, $v1, 0x1f
    v1 = v1 + a0;                                               // 0x00125640: addu $v1, $v1, $a0
    v1 = v1 >> 1;                                               // 0x00125644: sra $v1, $v1, 1
    *(uint32_t*)(t6) = v1;                                      // 0x00125648: sw $v1, 0($t6)
    *(uint8_t*)(t0) = a1;                                       // 0x0012564c: sb $a1, 0($t0)
    return;                                                     // 0x00125650: jr $ra
    *(uint8_t*)(a3) = a2;                                       // 0x00125654: sb $a2, 0($a3)
}