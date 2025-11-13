/** @category: game/rendering @status: complete @author: caprado */
void func_00195ec0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00195ec0: addiu $sp, $sp, -0x10
    func_001a0970();  // 0x1a0960                                // 0x00195ec8: jal 0x1a0960
    /* nop */                                                   // 0x00195ecc: nop 
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x00195ed0: lw $a0, -0x645c($gp)
    func_00198130();  // 0x197a10                                // 0x00195ed4: jal 0x197a10
    a1 = 2;                                                     // 0x00195ed8: addiu $a1, $zero, 2
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x00195edc: lw $a0, -0x645c($gp)
    func_00197a10();  // 0x197760                                // 0x00195ee0: jal 0x197760
    a1 = 2;                                                     // 0x00195ee4: addiu $a1, $zero, 2
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x00195ee8: lw $a0, -0x645c($gp)
    func_00197760();  // 0x1975e0                                // 0x00195eec: jal 0x1975e0
    a1 = 2;                                                     // 0x00195ef0: addiu $a1, $zero, 2
    a2 = *(int32_t*)((gp) + -0x6448);                           // 0x00195ef4: lw $a2, -0x6448($gp)
    a3 = *(int32_t*)((gp) + -0x644c);                           // 0x00195efc: lw $a3, -0x644c($gp)
    func_001975e0();  // 0x197300                                // 0x00195f04: jal 0x197300
    t0 = 2;                                                     // 0x00195f08: addiu $t0, $zero, 2
    func_001981f0();  // 0x198130                                // 0x00195f0c: jal 0x198130
    a0 = *(int32_t*)((gp) + -0x6468);                           // 0x00195f10: lw $a0, -0x6468($gp)
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x00195f14: lw $a0, -0x645c($gp)
    func_001982c0();  // 0x1981f0                                // 0x00195f18: jal 0x1981f0
    func_001a0980();  // 0x1a0970                                // 0x00195f20: jal 0x1a0970
    *(uint32_t*)((gp) + -0x64c8) = 0;                           // 0x00195f24: sw $zero, -0x64c8($gp)
    v1 = *(int32_t*)((gp) + -0x6448);                           // 0x00195f28: lw $v1, -0x6448($gp)
    goto label_0x195f3c;                                        // 0x00195f30: b 0x195f3c
    v0 = 1;                                                     // 0x00195f34: addiu $v0, $zero, 1
label_0x195f38:
    a1 = a1 + 1;                                                // 0x00195f38: addiu $a1, $a1, 1
label_0x195f3c:
    a0 = v0 << a1;                                              // 0x00195f3c: sllv $a0, $v0, $a1
    at = (a0 < v1) ? 1 : 0;                                     // 0x00195f40: slt $at, $a0, $v1
    /* nop */                                                   // 0x00195f44: nop 
    /* nop */                                                   // 0x00195f48: nop 
    if (at != 0) goto label_0x195f38;                           // 0x00195f4c: bnez $at, 0x195f38
    /* nop */                                                   // 0x00195f50: nop 
    /* move to FPU: $v1, $f1 */                                 // 0x00195f54: mtc1 $v1, $f1
    a1 = *(int32_t*)((gp) + -0x644c);                           // 0x00195f58: lw $a1, -0x644c($gp)
    /* move to FPU: $a0, $f0 */                                 // 0x00195f5c: mtc1 $a0, $f0
    v0 = 1;                                                     // 0x00195f60: addiu $v0, $zero, 1
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x00195f64: cvt.s.w $f1, $f1
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00195f6c: cvt.s.w $f0, $f0
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x00195f70: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x00195f74: nop 
    /* nop */                                                   // 0x00195f78: nop 
    goto label_0x195f88;                                        // 0x00195f7c: b 0x195f88
    *(float*)((gp) + -0x64cc) = FPU_F0;  // Store float         // 0x00195f80: swc1 $f0, -0x64cc($gp)
label_0x195f84:
    v1 = v1 + 1;                                                // 0x00195f84: addiu $v1, $v1, 1
label_0x195f88:
    a0 = v0 << v1;                                              // 0x00195f88: sllv $a0, $v0, $v1
    at = (a0 < a1) ? 1 : 0;                                     // 0x00195f8c: slt $at, $a0, $a1
    /* nop */                                                   // 0x00195f90: nop 
    /* nop */                                                   // 0x00195f94: nop 
    if (at != 0) goto label_0x195f84;                           // 0x00195f98: bnez $at, 0x195f84
    /* nop */                                                   // 0x00195f9c: nop 
    /* move to FPU: $a1, $f1 */                                 // 0x00195fa0: mtc1 $a1, $f1
    at = 0x28 << 16;                                            // 0x00195fa4: lui $at, 0x28
    /* move to FPU: $a0, $f0 */                                 // 0x00195fa8: mtc1 $a0, $f0
    g_00285424 = 0;  // Global at 0x00285424                    // 0x00195fac: sw $zero, 0x5424($at)
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x00195fb0: cvt.s.w $f1, $f1
    at = 0x28 << 16;                                            // 0x00195fb4: lui $at, 0x28
    g_00285428 = 0;  // Global at 0x00285428                    // 0x00195fb8: sw $zero, 0x5428($at)
    v1 = 0x3f80 << 16;                                          // 0x00195fbc: lui $v1, 0x3f80
    at = 0x28 << 16;                                            // 0x00195fc0: lui $at, 0x28
    g_0028542c = 0;  // Global at 0x0028542c                    // 0x00195fc4: sw $zero, 0x542c($at)
    at = 0x28 << 16;                                            // 0x00195fc8: lui $at, 0x28
    g_00285430 = 0;  // Global at 0x00285430                    // 0x00195fcc: sw $zero, 0x5430($at)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00195fd0: cvt.s.w $f0, $f0
    at = 0x28 << 16;                                            // 0x00195fd4: lui $at, 0x28
    g_00285420 = v1;  // Global at 0x00285420                   // 0x00195fd8: sw $v1, 0x5420($at)
    at = 0x28 << 16;                                            // 0x00195fdc: lui $at, 0x28
    g_00285434 = v1;  // Global at 0x00285434                   // 0x00195fe0: sw $v1, 0x5434($at)
    at = 0x28 << 16;                                            // 0x00195fe4: lui $at, 0x28
    g_00285438 = 0;  // Global at 0x00285438                    // 0x00195fe8: sw $zero, 0x5438($at)
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x00195fec: div.s $f0, $f1, $f0
    at = 0x28 << 16;                                            // 0x00195ff0: lui $at, 0x28
    g_0028543c = 0;  // Global at 0x0028543c                    // 0x00195ff4: sw $zero, 0x543c($at)
    at = 0x28 << 16;                                            // 0x00195ff8: lui $at, 0x28
    g_00285440 = 0;  // Global at 0x00285440                    // 0x00195ffc: sw $zero, 0x5440($at)
    at = 0x28 << 16;                                            // 0x00196000: lui $at, 0x28
    g_00285444 = 0;  // Global at 0x00285444                    // 0x00196004: sw $zero, 0x5444($at)
    at = 0x28 << 16;                                            // 0x00196008: lui $at, 0x28
    g_00285448 = v1;  // Global at 0x00285448                   // 0x0019600c: sw $v1, 0x5448($at)
    at = 0x28 << 16;                                            // 0x00196010: lui $at, 0x28
    g_0028545c = v1;  // Global at 0x0028545c                   // 0x00196014: sw $v1, 0x545c($at)
    at = 0x28 << 16;                                            // 0x00196018: lui $at, 0x28
    g_0028544c = 0;  // Global at 0x0028544c                    // 0x0019601c: sw $zero, 0x544c($at)
    at = 0x28 << 16;                                            // 0x00196020: lui $at, 0x28
    g_00285450 = 0;  // Global at 0x00285450                    // 0x00196024: sw $zero, 0x5450($at)
    at = 0x28 << 16;                                            // 0x00196028: lui $at, 0x28
    g_00285454 = 0;  // Global at 0x00285454                    // 0x0019602c: sw $zero, 0x5454($at)
    at = 0x28 << 16;                                            // 0x00196030: lui $at, 0x28
    g_00285458 = 0;  // Global at 0x00285458                    // 0x00196034: sw $zero, 0x5458($at)
    *(float*)((gp) + -0x64d0) = FPU_F0;  // Store float         // 0x00196038: swc1 $f0, -0x64d0($gp)
    return;                                                     // 0x00196040: jr $ra
    sp = sp + 0x10;                                             // 0x00196044: addiu $sp, $sp, 0x10
}