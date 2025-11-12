void func_00126558() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = (a1 < 0x12) ? 1 : 0;                                   // 0x00126558: slti $a1, $a1, 0x12
    if (a1 != 0) goto label_0x1265d0;                           // 0x00126560: bnez $a1, 0x1265d0
    v0 = -1;                                                    // 0x00126564: addiu $v0, $zero, -1
    v1 = *(uint16_t*)(a3);                                      // 0x00126568: lhu $v1, 0($a3)
    a1 = 0 | 0x8000;                                            // 0x0012656c: ori $a1, $zero, 0x8000
    t0 = -0x100;                                                // 0x00126570: addiu $t0, $zero, -0x100
    a0 = v1 << 8;                                               // 0x00126574: sll $a0, $v1, 8
    v1 = (unsigned)v1 >> 8;                                     // 0x00126578: srl $v1, $v1, 8
    v1 = v1 | a0;                                               // 0x0012657c: or $v1, $v1, $a0
    v1 = v1 & 0xffff;                                           // 0x00126580: andi $v1, $v1, 0xffff
    if (v1 != a1) goto label_0x1265d0;                          // 0x00126584: bne $v1, $a1, 0x1265d0
    v0 = -2;                                                    // 0x00126588: addiu $v0, $zero, -2
    a0 = *(uint16_t*)((a3) + 2);                                // 0x0012658c: lhu $a0, 2($a3)
    v1 = *(uint8_t*)((a3) + 3);                                 // 0x00126590: lbu $v1, 3($a3)
    a0 = a0 << 8;                                               // 0x00126594: sll $a0, $a0, 8
    a0 = a0 & t0;                                               // 0x00126598: and $a0, $a0, $t0
    v1 = v1 | a0;                                               // 0x0012659c: or $v1, $v1, $a0
    v1 = v1 << 0x10;                                            // 0x001265a0: sll $v1, $v1, 0x10
    v1 = v1 >> 0x10;                                            // 0x001265a4: sra $v1, $v1, 0x10
    v1 = (v1 < 0xe) ? 1 : 0;                                    // 0x001265a8: slti $v1, $v1, 0xe
    if (v1 != 0) goto label_0x1265d0;                           // 0x001265ac: bnez $v1, 0x1265d0
    v0 = -1;                                                    // 0x001265b0: addiu $v0, $zero, -1
    a0 = *(uint16_t*)((a3) + 0x10);                             // 0x001265b4: lhu $a0, 0x10($a3)
    v1 = a0 << 8;                                               // 0x001265bc: sll $v1, $a0, 8
    a0 = (unsigned)a0 >> 8;                                     // 0x001265c0: srl $a0, $a0, 8
    v1 = v1 & t0;                                               // 0x001265c4: and $v1, $v1, $t0
    a0 = a0 | v1;                                               // 0x001265c8: or $a0, $a0, $v1
    *(uint16_t*)(a2) = a0;                                      // 0x001265cc: sh $a0, 0($a2)
label_0x1265d0:
    return;                                                     // 0x001265d0: jr $ra
    /* nop */                                                   // 0x001265d4: nop 
}