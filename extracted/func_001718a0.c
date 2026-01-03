void func_001718a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001718a0: addiu $sp, $sp, -0x50
    fp = s0 + s5;                                               // 0x001718c4: addu $fp, $s0, $s5
    a3 = s1 + a3;                                               // 0x001718c8: addu $a3, $s1, $a3
    a3 = (a3 < fp) ? 1 : 0;                                     // 0x001718d0: slt $a3, $a3, $fp
    v1 = (s0 < s1) ? 1 : 0;                                     // 0x001718ec: slt $v1, $s0, $s1
    if (a3 != 0) goto label_0x17199c;                           // 0x001718f8: bnez $a3, 0x17199c
    /* bnezl $v1, 0x171940 */                                   // 0x00171900: bnezl $v1, 0x171940
    s3 = s1 - s0;                                               // 0x00171904: subu $s3, $s1, $s0
    func_00107ab8();  // 107ab8                                // 0x0017190c: jal 0x107ab8
    a1 = s2 + s1;                                               // 0x00171918: addu $a1, $s2, $s1
    func_00107ab8();  // 107ab8                                // 0x0017191c: jal 0x107ab8
    a2 = s0 - s1;                                               // 0x00171920: subu $a2, $s0, $s1
    a0 = s6 + s0;                                               // 0x00171924: addu $a0, $s6, $s0
    a0 = a0 - s1;                                               // 0x00171928: subu $a0, $a0, $s1
    func_00107ab8();  // 107ab8                                // 0x00171930: jal 0x107ab8
    goto label_0x17199c;                                        // 0x00171938: b 0x17199c
    v0 = (s5 < s3) ? 1 : 0;                                     // 0x00171940: slt $v0, $s5, $s3
    if (v0 != 0) goto label_0x171980;                           // 0x00171944: bnez $v0, 0x171980
    func_00107ab8();  // 107ab8                                // 0x0017194c: jal 0x107ab8
    func_00107ab8();  // 107ab8                                // 0x0017195c: jal 0x107ab8
    a0 = s7 + s0;                                               // 0x00171960: addu $a0, $s7, $s0
    a1 = s4 + s1;                                               // 0x00171964: addu $a1, $s4, $s1
    a1 = a1 - s0;                                               // 0x00171968: subu $a1, $a1, $s0
    a2 = s5 - s3;                                               // 0x0017196c: subu $a2, $s5, $s3
    func_00107ab8();  // 107ab8                                // 0x00171970: jal 0x107ab8
    goto label_0x17199c;                                        // 0x00171978: b 0x17199c
label_0x171980:
    func_00107ab8();  // 107ab8                                // 0x00171980: jal 0x107ab8
    func_00107ab8();  // 107ab8                                // 0x00171990: jal 0x107ab8
    a0 = s7 + s0;                                               // 0x00171994: addu $a0, $s7, $s0
label_0x17199c:
    return;                                                     // 0x001719c4: jr $ra
    sp = sp + 0x50;                                             // 0x001719c8: addiu $sp, $sp, 0x50
}