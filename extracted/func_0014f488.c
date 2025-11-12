void func_0014f488() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x10;                                            // 0x0014f488: addiu $sp, $sp, -0x10
    a2 = 0x21 << 16;                                            // 0x0014f48c: lui $a2, 0x21
    a2 = a2 + 0xe08;                                            // 0x0014f494: addiu $a2, $a2, 0xe08
    goto label_0x14f4a8;                                        // 0x0014f49c: j 0x14f4a8
    sp = sp + 0x10;                                             // 0x0014f4a0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0014f4a4: nop 
label_0x14f4a8:
    sp = sp + -0x60;                                            // 0x0014f4a8: addiu $sp, $sp, -0x60
    v1 = *(int32_t*)((s7) + 4);                                 // 0x0014f4e0: lw $v1, 4($s7)
    local_0 = a2;                                               // 0x0014f4e4: sw $a2, 0($sp)
    a1 = v1 + 0xf;                                              // 0x0014f4e8: addiu $a1, $v1, 0xf
    v0 = (v1 < 0) ? 1 : 0;                                      // 0x0014f4ec: slti $v0, $v1, 0
    a0 = *(int32_t*)((s7) + 8);                                 // 0x0014f4f0: lw $a0, 8($s7)
    if (v0 != 0) v1 = a1;                                       // 0x0014f4f4: movn $v1, $a1, $v0
    v1 = v1 >> 4;                                               // 0x0014f4f8: sra $v1, $v1, 4
    local_4 = v1;                                               // 0x0014f4fc: sw $v1, 4($sp)
    a2 = a0 + 0xf;                                              // 0x0014f500: addiu $a2, $a0, 0xf
    v0 = (a0 < 0) ? 1 : 0;                                      // 0x0014f504: slti $v0, $a0, 0
    if (v0 != 0) a0 = a2;                                       // 0x0014f508: movn $a0, $a2, $v0
    a1 = *(int32_t*)(fp);                                       // 0x0014f50c: lw $a1, 0($fp)
    s6 = a0 >> 4;                                               // 0x0014f510: sra $s6, $a0, 4
    if (v1 <= 0) goto label_0x14f594;                           // 0x0014f514: blez $v1, 0x14f594
    s4 = *(int32_t*)((s7) + 0xc);                               // 0x0014f518: lw $s4, 0xc($s7)
    goto label_0x14f530;                                        // 0x0014f51c: b 0x14f530
    v1 = *(int32_t*)((fp) + 8);                                 // 0x0014f520: lw $v1, 8($fp)
    /* nop */                                                   // 0x0014f524: nop 
    v1 = *(int32_t*)((fp) + 8);                                 // 0x0014f528: lw $v1, 8($fp)
    /* nop */                                                   // 0x0014f52c: nop 
label_0x14f530:
    /* multiply: v1 * s5 -> hi:lo */                            // 0x0014f530: mult $ac3, $v1, $s5
    v0 = v1 << 1;                                               // 0x0014f534: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x0014f538: addu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x0014f53c: sll $v0, $v0, 3
    if (s6 <= 0) goto label_0x14f580;                           // 0x0014f540: blez $s6, 0x14f580
    s2 = a1 + v0;                                               // 0x0014f544: addu $s2, $a1, $v0
    s1 = s5 << 6;                                               // 0x0014f548: sll $s1, $s5, 6
    s3 = s4 << 4;                                               // 0x0014f54c: sll $s3, $s4, 4
    /* nop */                                                   // 0x0014f554: nop 
label_0x14f558:
    a2 = *(int32_t*)(s7);                                       // 0x0014f558: lw $a2, 0($s7)
    a3 = local_0;                                               // 0x0014f560: lw $a3, 0($sp)
    a2 = s1 + a2;                                               // 0x0014f568: addu $a2, $s1, $a2
    s1 = s1 + s3;                                               // 0x0014f56c: addu $s1, $s1, $s3
    func_0014f370();  // 0x14cc78                                // 0x0014f570: jal 0x14cc78
    s0 = s0 + -1;                                               // 0x0014f574: addiu $s0, $s0, -1
    if (s0 != 0) goto label_0x14f558;                           // 0x0014f578: bnez $s0, 0x14f558
    s2 = s2 + 0x180;                                            // 0x0014f57c: addiu $s2, $s2, 0x180
label_0x14f580:
    v1 = local_4;                                               // 0x0014f580: lw $v1, 4($sp)
    s5 = s5 + 1;                                                // 0x0014f584: addiu $s5, $s5, 1
    v0 = (s5 < v1) ? 1 : 0;                                     // 0x0014f588: slt $v0, $s5, $v1
    /* bnezl $v0, 0x14f528 */                                   // 0x0014f58c: bnezl $v0, 0x14f528
    a1 = *(int32_t*)(fp);                                       // 0x0014f590: lw $a1, 0($fp)
label_0x14f594:
    return;                                                     // 0x0014f5bc: jr $ra
    sp = sp + 0x60;                                             // 0x0014f5c0: addiu $sp, $sp, 0x60
}