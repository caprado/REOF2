void func_00124998() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00124998: addiu $sp, $sp, -0x20
    v0 = 0 | 0x8000;                                            // 0x0012499c: ori $v0, $zero, 0x8000
    v1 = *(uint16_t*)(s0);                                      // 0x001249b8: lhu $v1, 0($s0)
    a3 = v1 << 8;                                               // 0x001249bc: sll $a3, $v1, 8
    v1 = (unsigned)v1 >> 8;                                     // 0x001249c0: srl $v1, $v1, 8
    v1 = v1 | a3;                                               // 0x001249c4: or $v1, $v1, $a3
    v1 = v1 & 0xffff;                                           // 0x001249c8: andi $v1, $v1, 0xffff
    if (v1 != v0) goto label_0x1249f0;                          // 0x001249cc: bne $v1, $v0, 0x1249f0
    return func_00124998();  // Tail call                        // 0x001249e4: j 0x1246a8
    sp = sp + 0x20;                                             // 0x001249e8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001249ec: nop 
label_0x1249f0:
    func_001258c8();  // 1258c8                                // 0x001249f0: jal 0x1258c8
    if (v0 == 0) goto label_0x124a20;                           // 0x001249f8: beqz $v0, 0x124a20
    return func_00125750();  // Tail call                        // 0x00124a18: j 0x125658
    sp = sp + 0x20;                                             // 0x00124a1c: addiu $sp, $sp, 0x20
label_0x124a20:
    func_001260d0();  // 1260d0                                // 0x00124a20: jal 0x1260d0
    if (v0 == 0) goto label_0x124a50;                           // 0x00124a28: beqz $v0, 0x124a50
    return func_00125c20();  // Tail call                        // 0x00124a48: j 0x125b20
    sp = sp + 0x20;                                             // 0x00124a4c: addiu $sp, $sp, 0x20
label_0x124a50:
    func_00123130();  // 123130                                // 0x00124a50: jal 0x123130
    if (v0 == 0) goto label_0x124a80;                           // 0x00124a58: beqz $v0, 0x124a80
    return func_001233c0();  // Tail call                        // 0x00124a78: j 0x1232a8
    sp = sp + 0x20;                                             // 0x00124a7c: addiu $sp, $sp, 0x20
label_0x124a80:
    func_00123a18();  // 123a18                                // 0x00124a80: jal 0x123a18
    if (v0 == 0) goto label_0x124ab0;                           // 0x00124a88: beqz $v0, 0x124ab0
    return func_00123c80();  // Tail call                        // 0x00124aa8: j 0x123b80
    sp = sp + 0x20;                                             // 0x00124aac: addiu $sp, $sp, 0x20
label_0x124ab0:
    func_00122c60();  // 122c60                                // 0x00124ab0: jal 0x122c60
    if (v0 == 0) goto label_0x124ae0;                           // 0x00124ab8: beqz $v0, 0x124ae0
    return func_00122bb0();  // Tail call                       // 0x00124ad8: j 0x122bb0
    sp = sp + 0x20;                                             // 0x00124adc: addiu $sp, $sp, 0x20
label_0x124ae0:
    v0 = -1;                                                    // 0x00124ae4: addiu $v0, $zero, -1
    return;                                                     // 0x00124af4: jr $ra
    sp = sp + 0x20;                                             // 0x00124af8: addiu $sp, $sp, 0x20
}