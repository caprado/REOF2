void func_001a20e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a20e0: addiu $sp, $sp, -0x10
    a2 = 0xff << 16;                                            // 0x001a20e4: lui $a2, 0xff
    v1 = 0x13;                                                  // 0x001a20ec: addiu $v1, $zero, 0x13
    a3 = *(int32_t*)(a0);                                       // 0x001a20f0: lw $a3, 0($a0)
    a2 = a3 & a2;                                               // 0x001a20f4: and $a2, $a3, $a2
    a2 = (unsigned)a2 >> 0x10;                                  // 0x001a20f8: srl $a2, $a2, 0x10
    if (a2 == v1) goto label_0x1a218c;                          // 0x001a20fc: beq $a2, $v1, 0x1a218c
    v1 = 0x12;                                                  // 0x001a2100: addiu $v1, $zero, 0x12
    if (a2 == v1) goto label_0x1a217c;                          // 0x001a2104: beq $a2, $v1, 0x1a217c
    /* nop */                                                   // 0x001a2108: nop 
    v1 = 0x11;                                                  // 0x001a210c: addiu $v1, $zero, 0x11
    if (a2 == v1) goto label_0x1a216c;                          // 0x001a2110: beq $a2, $v1, 0x1a216c
    v1 = 0x23;                                                  // 0x001a2114: addiu $v1, $zero, 0x23
    if (a2 == v1) goto label_0x1a215c;                          // 0x001a2118: beq $a2, $v1, 0x1a215c
    /* nop */                                                   // 0x001a211c: nop 
    v1 = 0x22;                                                  // 0x001a2120: addiu $v1, $zero, 0x22
    if (a2 == v1) goto label_0x1a214c;                          // 0x001a2124: beq $a2, $v1, 0x1a214c
    v1 = 0x21;                                                  // 0x001a2128: addiu $v1, $zero, 0x21
    if (a2 == v1) goto label_0x1a213c;                          // 0x001a212c: beq $a2, $v1, 0x1a213c
    /* nop */                                                   // 0x001a2130: nop 
    goto label_0x1a2198;                                        // 0x001a2134: b 0x1a2198
label_0x1a213c:
    func_001a2250();  // 0x1a21a0                                // 0x001a213c: jal 0x1a21a0
    /* nop */                                                   // 0x001a2140: nop 
    goto label_0x1a2194;                                        // 0x001a2144: b 0x1a2194
    /* nop */                                                   // 0x001a2148: nop 
label_0x1a214c:
    func_001a2310();  // 0x1a2250                                // 0x001a214c: jal 0x1a2250
    /* nop */                                                   // 0x001a2150: nop 
    goto label_0x1a2194;                                        // 0x001a2154: b 0x1a2194
    /* nop */                                                   // 0x001a2158: nop 
label_0x1a215c:
    func_001a23e0();  // 0x1a2310                                // 0x001a215c: jal 0x1a2310
    /* nop */                                                   // 0x001a2160: nop 
    goto label_0x1a2194;                                        // 0x001a2164: b 0x1a2194
    /* nop */                                                   // 0x001a2168: nop 
label_0x1a216c:
    func_001a2490();  // 0x1a23e0                                // 0x001a216c: jal 0x1a23e0
    /* nop */                                                   // 0x001a2170: nop 
    goto label_0x1a2194;                                        // 0x001a2174: b 0x1a2194
    /* nop */                                                   // 0x001a2178: nop 
label_0x1a217c:
    func_001a2550();  // 0x1a2490                                // 0x001a217c: jal 0x1a2490
    /* nop */                                                   // 0x001a2180: nop 
    goto label_0x1a2194;                                        // 0x001a2184: b 0x1a2194
    /* nop */                                                   // 0x001a2188: nop 
label_0x1a218c:
    func_001a2620();  // 0x1a2550                                // 0x001a218c: jal 0x1a2550
    /* nop */                                                   // 0x001a2190: nop 
label_0x1a2194:
label_0x1a2198:
    return;                                                     // 0x001a2198: jr $ra
    sp = sp + 0x10;                                             // 0x001a219c: addiu $sp, $sp, 0x10
}