void func_001a53a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001a5550();  // Tail call                       // 0x001a53a4: j 0x1a5550
    /* nop */                                                   // 0x001a53ac: nop 
    return func_001a5630();  // Tail call                       // 0x001a53b0: j 0x1a5630
    /* nop */                                                   // 0x001a53b8: nop 
    /* nop */                                                   // 0x001a53bc: nop 
    v1 = *(uint8_t*)(a0);                                       // 0x001a53c0: lbu $v1, 0($a0)
    v0 = 0x54;                                                  // 0x001a53c4: addiu $v0, $zero, 0x54
    if (v1 != v0) goto label_0x1a5404;                          // 0x001a53c8: bne $v1, $v0, 0x1a5404
    v1 = *(uint8_t*)((a0) + 1);                                 // 0x001a53d0: lbu $v1, 1($a0)
    v0 = 0x49;                                                  // 0x001a53d4: addiu $v0, $zero, 0x49
    if (v1 != v0) goto label_0x1a5400;                          // 0x001a53d8: bne $v1, $v0, 0x1a5400
    /* nop */                                                   // 0x001a53dc: nop 
    v1 = *(uint8_t*)((a0) + 2);                                 // 0x001a53e0: lbu $v1, 2($a0)
    v0 = 0x4d;                                                  // 0x001a53e4: addiu $v0, $zero, 0x4d
    if (v1 != v0) goto label_0x1a5400;                          // 0x001a53e8: bne $v1, $v0, 0x1a5400
    /* nop */                                                   // 0x001a53ec: nop 
    v1 = *(uint8_t*)((a0) + 3);                                 // 0x001a53f0: lbu $v1, 3($a0)
    v0 = 0x32;                                                  // 0x001a53f4: addiu $v0, $zero, 0x32
    if (v1 == v0) goto label_0x1a540c;                          // 0x001a53f8: beq $v1, $v0, 0x1a540c
    /* nop */                                                   // 0x001a53fc: nop 
label_0x1a5400:
label_0x1a5404:
    goto label_0x1a5458;                                        // 0x001a5404: b 0x1a5458
    /* nop */                                                   // 0x001a5408: nop 
label_0x1a540c:
    v1 = *(uint8_t*)((a0) + 4);                                 // 0x001a540c: lbu $v1, 4($a0)
    v0 = 3;                                                     // 0x001a5410: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1a5444;                          // 0x001a5414: beq $v1, $v0, 0x1a5444
    a1 = *(uint8_t*)((a0) + 5);                                 // 0x001a5418: lbu $a1, 5($a0)
    v0 = 4;                                                     // 0x001a541c: addiu $v0, $zero, 4
    if (v1 != v0) goto label_0x1a543c;                          // 0x001a5420: bne $v1, $v0, 0x1a543c
    v0 = a1 & 0xff;                                             // 0x001a5428: andi $v0, $a1, 0xff
    at = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x001a542c: sltiu $at, $v0, 2
    if (at != 0) goto label_0x1a5444;                           // 0x001a5430: bnez $at, 0x1a5444
    /* nop */                                                   // 0x001a5434: nop 
label_0x1a543c:
    goto label_0x1a5458;                                        // 0x001a543c: b 0x1a5458
    /* nop */                                                   // 0x001a5440: nop 
label_0x1a5444:
    v1 = *(uint16_t*)((a0) + 6);                                // 0x001a5444: lhu $v1, 6($a0)
    v0 = 1;                                                     // 0x001a5448: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1a5458;                          // 0x001a544c: beq $v1, $v0, 0x1a5458
    /* nop */                                                   // 0x001a5450: nop 
label_0x1a5458:
    return;                                                     // 0x001a5458: jr $ra
    /* nop */                                                   // 0x001a545c: nop 
}