void func_001791f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a0 + 0x180;                                            // 0x001791f8: addiu $v1, $a0, 0x180
    v0 = *(uint8_t*)((v1) + 0x18);                              // 0x00179200: lbu $v0, 0x18($v1)
    goto label_0x179228;                                        // 0x00179204: b 0x179228
    /* nop */                                                   // 0x0017920c: nop 
label_0x179210:
    v0 = a2 << 6;                                               // 0x00179210: sll $v0, $a2, 6
    v1 = (a2 < 0x1a) ? 1 : 0;                                   // 0x00179214: slti $v1, $a2, 0x1a
    if (v1 == 0) goto label_0x179238;                           // 0x00179218: beqz $v1, 0x179238
    v0 = a0 + v0;                                               // 0x0017921c: addu $v0, $a0, $v0
    v1 = v0 + 0x180;                                            // 0x00179220: addiu $v1, $v0, 0x180
    v0 = *(uint8_t*)((v1) + 0x18);                              // 0x00179224: lbu $v0, 0x18($v1)
label_0x179228:
    /* nop */                                                   // 0x00179228: nop 
    if (v0 != a1) goto label_0x179210;                          // 0x0017922c: bnel $v0, $a1, 0x179210
    a2 = a2 + 1;                                                // 0x00179230: addiu $a2, $a2, 1
label_0x179238:
    return;                                                     // 0x00179238: jr $ra
}